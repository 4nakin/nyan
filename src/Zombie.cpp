/*
 * =====================================================================================
 *
 *       Filename:  Zombie.cpp
 *
 *       Description:  
 *
 *       Created:  08/28/2012 12:44:42 PM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com 
 *
 * =====================================================================================
 */

#include "Zombie.hpp"

void Zombie::Load()
{
    NSprite::Load("resources/gfx/zombie2.png", 125, 128, 1.f);

    LoadAnimation(1, 1);     // Z_STILL
    LoadAnimation(1, 4);     // Z_FORWARD
    LoadAnimation(3, 4);     // Z_LEFT
    LoadAnimation(2, 4);     // Z_RIGHT
    LoadAnimation(0, 4);     // Z_BACK

    _still = true;
    surf.setPosition(0, 0);
    _lastPos = sf::Vector2f(0, 0);
}


void Zombie::Move(SpriteDirection dir)
{
    _still = false;

    switch(dir)
    {
        case RIGHT:
            surf.move(3.f, 0.f);
            SetAnimation(Z_RIGHT);
            break;

        case LEFT:
            surf.move(-3.f, 0.f);
            SetAnimation(Z_LEFT);
            break;

        case UP:
            surf.move(0.f, -3.f);
            SetAnimation(Z_BACK);
            break;

        case DOWN:
            surf.move(0.f, 3.f);
            SetAnimation(Z_FORWARD);
            break;

        default:
           break; 

    }

    _lastPos = surf.getPosition();
}
