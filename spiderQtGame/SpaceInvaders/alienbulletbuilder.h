#pragma once
#include "base.h"
#include "alienbullet.h"
#include "alienbulletbuilderinterface.h"

namespace game {

    class AlienBulletBuilder: public AlienBulletBuilderInterface{

        public:
            AlienBulletBuilder(int velocity, Base* alien);
            virtual void set_velocity(int velocity);
            virtual AlienBullet* build_bullet();
            virtual ~AlienBulletBuilder(){}

        protected:
            int velocity;
            QPixmap image;
            Base* alien;

    };

}
