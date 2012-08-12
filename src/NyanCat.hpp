/*
 * =====================================================================================
 *
 *       Filename:  NyanCat.hpp
 *
 *
 *       Created:  06/24/2012 02:10:17 PM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */

#ifndef __NYANCAT_H__
#define __NYANCAT_H__

#include "NSprite.hpp"

#define STILL           0
#define WALKING_RIGHT   1
#define WALKING_LEFT    2
#define SLEEP           3


class NyanCat: public NSprite
{
    public:
        void Load();
        void Still();
        void Move(SpriteDirection dir);

        

    private:
        sf::Clock _sleepTimer;
        bool _still;
        sf::Vector2f _lastPos;
};


#endif
