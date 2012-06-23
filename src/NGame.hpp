/*
 * =====================================================================================
 *
 *       Filename:  NGame.hpp
 *
 *       Description:  Game Loop Class
 *
 *       Created:  06/23/2012 02:58:22 PM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */

#ifndef __NGAME_H__
#define __NGAME_H__

#include <map>
#include <string>
#include <SFML/Graphics.hpp>
#include "NState.hpp"


class NGame
{
    public:
        bool Init(sf::RenderWindow* App);
        void Draw();
        void Update();

        void Quit();
        void Unload();

        // called by NState objects
        void SetState(NState* state);


    private:
        int _width;
        int _height;
        int _bpp;

        NState* _curState;
};




#endif
