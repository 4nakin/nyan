/*
 * =====================================================================================
 *
 *       Filename:  NSprite.hpp
 *
 *
 *       Created:  06/23/2012 07:49:22 PM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */

#ifndef __NSPRITE_H__
#define __NSPRITE_H__

#include <string>
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Rect.hpp>


enum SpriteDirection { LEFT, RIGHT, UP, DOWN };


class NSprite
{
    public:
        void Load(std::string file, int frameWidth, int frameHeight, float animSpeed);
        void LoadAnimation(int row, int frames);
        void SetAnimation(int animNumber);
        
        void Move(SpriteDirection dir);
        void Stop();

        void Play();

        sf::Sprite surf;

    protected:
        std::vector<std::vector<sf::IntRect> > _anims;
        std::vector<sf::IntRect> _currentAnim;

        int _animSpeed;
        int _width;
        int _height;
        int _curFrame;
        sf::Clock _animTimer;
        sf::Image _img;

};


#endif
