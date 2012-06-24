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
#include <tr1/memory>
#include <memory>
#include <SFML/Graphics.hpp>
#include "NState.hpp"


typedef std::tr1::shared_ptr<NState> state_ptr;
typedef std::tr1::shared_ptr<sf::RenderWindow> render_ptr;


class NGame
{
    public:
        bool Init(render_ptr win);
        void Draw();
        void Update();

        void Quit();
        void Unload();

        // called by NState objects
        void SetState(state_ptr state);

        render_ptr App;


    private:
        int _width;
        int _height;
        int _bpp;

        state_ptr _curState;
};

typedef std::tr1::shared_ptr<NGame> game_ptr;


#endif
