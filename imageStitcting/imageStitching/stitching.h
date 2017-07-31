#ifndef STITCHINGDILOG_H
#define STITCHINGDILOG_H

#include <QMainWindow>
#include "qgraphicsscene.h"
#include "QGraphicsPixmapItem"
#include "QGraphicsView"
#include "qlabel.h"
#include "qfiledialog.h"
#include "QStringList"
#include "qstring.h"
#include "qdebug.h"
#include "qvector.h"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/stitching.hpp"


using namespace std;
using namespace cv;

namespace Ui {
class stitchingDilog;
}

class stitchingDilog : public QMainWindow
{
    Q_OBJECT

public:
    explicit stitchingDilog(QWidget *parent = 0);
    ~stitchingDilog();
public:
    enum ProcessStatut{
        Success,
        // if the overlap between 2 frame is not enough or too high
        OverlapSizeError,
        // put here what you need
    };

    enum SaveStatut{
        saveSuccess,
        // put here what you need
    };

private slots:
    void on_openbtn_clicked();

    void on_pushButton_clicked();

    void on_savebtn_clicked();

    void on_resetBtn_clicked();
    // stitch current frame from previous frame
    // return status
    ProcessStatut processFrame(cv::Mat & frame);

    // save current panorama
    // return status
    SaveStatut saveToFile(const QString filename);

    // reset all current buffer/ panorama
    void reset();

private:
    Ui::stitchingDilog *ui;
    QStringList files;
    QStringList allFiles;
    QString fileName;
    QString filePath;
    vector<Mat> imgs;

};

#endif // STITCHINGDILOG_H
