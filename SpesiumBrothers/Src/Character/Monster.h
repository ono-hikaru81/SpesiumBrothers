﻿
#ifndef MONSTER_H
#define MONSTER_H

#include <Character/CharacterBase.h>

namespace spesium {
    namespace character {
        class Monster : public CharacterBase {
           public:
            Monster();
            ~Monster() override;

           public:
            void Draw() override;

            void OnCollision() override;

            void TakeDamage( const int32_t& damage_ ) override;
        };
    }  // namespace character
}  // namespace spesium

#endif  // !MONSTER_H
