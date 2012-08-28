/*
 * =====================================================================================
 *
 *       Filename:  Zombie.hpp
 *
 *
 *        Created:  08/28/2012 12:36:18 PM
 *        Compiler:  gcc
 *
 *        Author:  Andrew De Stefano, andrew.destef@gmail.com 
 *
 * =====================================================================================
 */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include "NSprite.hpp"

#define Z_STILL       0
#define Z_FORWARD     1
#define Z_LEFT        2
#define Z_RIGHT       3
#define Z_BACK        4


class Zombie: public NSprite
{
    public:
        void Load();
        void Still();
        void Move(SpriteDirection dir);

    private:
        bool _still;
        sf::Vector2f _lastPos;

};


#endif

        
