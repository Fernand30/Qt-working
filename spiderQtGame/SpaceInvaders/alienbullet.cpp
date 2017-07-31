#include "alienbullet.h"

namespace game {
    AlienBullet::AlienBullet(QPixmap image, int x, int y, int bullet_velocity)
        :Base(image,0.5,x,y), bullet_velocity(bullet_velocity){}

    AlienBullet::~AlienBullet(){}

    //SETTER
    void AlienBullet::move(){
        set_y(get_y()+bullet_velocity);
    }

}
