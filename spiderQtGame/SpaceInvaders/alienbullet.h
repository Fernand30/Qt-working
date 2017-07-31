#pragma once
#include "base.h"


namespace game {
    class AlienBullet : public Base{
    private:
        int bullet_velocity;

    public:
        AlienBullet(QPixmap image, int x, int y, int bullet_velocity);
        void move();
        virtual ~AlienBullet();

    };
}
