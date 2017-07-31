#pragma once
#include "alienbullet.h"
namespace game {

    class AlienBulletBuilderInterface {
        public:
            virtual AlienBullet* build_bullet() = 0;
            virtual void set_velocity(int velocity) = 0;
    };
}
