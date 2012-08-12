/*
 * =====================================================================================
 *
 *       Filename:  NSprite.cpp
 *
 *
 *       Created:  06/23/2012 07:58:59 PM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */

#include "NSprite.hpp"


void NSprite::Load(std::string file, int frameWidth, int frameHeight, float animSpeed)
{

    _img.loadFromFile(file);

    _animSpeed = animSpeed;
    _width = frameWidth;
    _height = frameHeight;
    _curFrame = 0;
    _animTimer.restart();


    // set default animation to first frame
    _currentAnim.push_back(sf::IntRect(0, 0, _width, _height)); 

    // set a nice ugly pink as the color mask
    _img.createMaskFromColor(sf::Color(255, 0, 255));
    _tex.loadFromImage(_img);
    surf.setTexture(_tex);
}


void NSprite::LoadAnimation(int row, int frames)
{
    std::vector<sf::IntRect> anim;

    for (int i = 0; i < frames; i++)
    {
        sf::IntRect tmp(i * _width, row * _height, (i + 1) * _width, (row + 1) * _height);
        anim.push_back(tmp);
    }

    _anims.push_back(anim);
}


void NSprite::SetAnimation(int animNumber)
{
    static int lastAnim = animNumber;
    //if (lastAnim != animNumber)
        _currentAnim = _anims[animNumber];
}


void NSprite::Play()
{
   if (_animTimer.getElapsedTime().asSeconds()*10 >= _animSpeed)
   {

       _curFrame += 1;
       if (_curFrame >= (int)_currentAnim.size())
           _curFrame = 0;

       _animTimer.restart();
   } 

   surf.setTextureRect(_currentAnim[_curFrame]);
}
