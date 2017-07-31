#include "alienbulletbuilder.h"
#include "base.h"
#include "alienbullet.h"

namespace game {
    AlienBulletBuilder::AlienBulletBuilder(int velocity, Base* alien)
    : velocity(velocity)
    {
        QPixmap b_image;
        b_image.load(":/Images/alienlaser.png");
        image = b_image;
        this->alien = alien;
    }

    AlienBullet* AlienBulletBuilder::build_bullet(){
        AlienBullet* b = new AlienBullet(image,alien->get_x(), alien->get_y(), this->velocity);
        return b;
    }

    //SETTER
    void AlienBulletBuilder::set_velocity(int velocity){
         this->velocity = velocity;
    }
}
