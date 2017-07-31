#include "stitching.h"
#include "ui_stitchingdilog.h"
#include "QGridLayout"
#include "qmessagebox.h"
#include "qdir.h"
#include "qfile.h"
#include "qlayoutitem.h"

using namespace std;
using namespace cv;
stitchingDilog::stitchingDilog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::stitchingDilog)
{
    ui->setupUi(this);
}

stitchingDilog::~stitchingDilog()
{
    delete ui;
}

void stitchingDilog::on_openbtn_clicked()                       //imageOpen button click
{
    QString pathStr;
    files = QFileDialog::getOpenFileNames(
                              this,
                              "Select one or more files to open",
                              "/",
                              "Images (*.png *.xpm *.jpg)");
    allFiles.append(files);
    for(int i = 0;i<files.count();i++)
    {
        pathStr = files.at(i);

        QPixmap image(pathStr);


        QLabel *imageLabel = new QLabel();
        imageLabel->setScaledContents( true );

        imageLabel->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

        imageLabel->setPixmap(image);

        ui->imgLayout->addWidget(imageLabel);

    }
}

void stitchingDilog::on_pushButton_clicked()                                //stitching button click
{
    if(allFiles.isEmpty())
    {
        QMessageBox::information(this,"Operating Error!","Please open images and try again.");
        return;
    }
    bool try_use_gpu = true;
    Stitcher::Mode mode = Stitcher::PANORAMA;
    filePath = QDir::tempPath()+"camera.jpg";
    string result_name = filePath.toStdString();
    Mat imgMat;
    for(int i = 0;i<allFiles.count();i++)
    {
        QString mainPath = allFiles.at(i);
        imgMat= imread(mainPath.toStdString());
        processFrame(imgMat);
    }

    Mat pano;
    Ptr<Stitcher> stitcher = Stitcher::create(mode, try_use_gpu);
    Stitcher::Status status = stitcher->stitch(imgs, pano);
    if (status != Stitcher::OK)
    {
            QMessageBox::information(this,"Stitching failed!","Image Size and Matching Error,Please try again.");
            return;
    }
    imwrite(result_name, pano);

    QPixmap image(filePath);
    ui->label->setScaledContents( true );

    ui->label->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

    ui->label->setPixmap(image);

}

void stitchingDilog::on_savebtn_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                                     "/",
                                     tr("Images (*.png *.xpm *.jpg)"));

    saveToFile(fileName);
}
stitchingDilog::ProcessStatut stitchingDilog::processFrame(Mat &frame)
{
  imgs.push_back(frame);
  return ProcessStatut::Success;
}

stitchingDilog::SaveStatut stitchingDilog::saveToFile(const QString filename)
{
    QFile file(filePath);
    file.copy(filename);
    file.remove();
    return SaveStatut::saveSuccess;
}

void stitchingDilog::reset()
{

    allFiles.clear();

    while(ui->imgLayout->layout()->count() > 0)
      {
        QLayoutItem* item = ui->imgLayout->takeAt(0);
        delete item->widget();
      }

}

void stitchingDilog::on_resetBtn_clicked()
{
    reset();
}
