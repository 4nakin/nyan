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
#include "NState.hpp"


class NGame
{
    public:
        bool Init();
        void Draw();
        void Update();

        void Quit();
        void LoadState(std::string, NState);

        void Loop();

    private:
        std::map <std::string, NState> _states;
        int _width;
        int _height;
        int _bpp;

        // called by NState objects
        void SetState(std::string);
        friend class NState;

};




#endif
