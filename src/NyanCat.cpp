/*
 * =====================================================================================
 *
 *       Filename:  NyanCat.cpp
 *
 *    	  Description:  
 *
 *       Created:  06/24/2012 02:13:19 PM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */

#include "NyanCat.hpp"

void NyanCat::Load()
{
    NSprite::Load("resources/gfx/nyan2.png", 100, 100, 1.f); 

    LoadAnimation(2, 1);    // STILL
    LoadAnimation(0, 6);    // WALKING_RIGHT
    LoadAnimation(1, 6);    // WALKING_LEFT
    LoadAnimation(3, 1);    // SLEEP


    _still = true;
    surf.setPosition(0, 0);
    _lastPos = sf::Vector2f(0, 0);

}


void NyanCat::Move(SpriteDirection dir)
{
    _still = false;

    switch(dir)
    {
        case RIGHT:
            surf.move(3.f, 0.f);
            SetAnimation(WALKING_RIGHT);
            break;

        case LEFT:
            surf.move(-3.f, 0.f);
            SetAnimation(WALKING_LEFT);
            break;

        case UP:
            surf.move(0.f, -3.f);
            break;

        case DOWN:
            surf.move(0.f, 3.f);
            break;

        default:
                break;
    }

    _lastPos = surf.getPosition();
    _sleepTimer.restart();
}


void NyanCat::Still()
{
    if (_sleepTimer.getElapsedTime().asSeconds() >= 7)
        SetAnimation(SLEEP);
    else
        SetAnimation(STILL);
}
