/*
 * =====================================================================================
 *
 *       Filename:  IntroState.hpp
 *
 *
 *       Created:  06/23/2012 04:33:49 PM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */

#ifndef __INTROSTATE_H__
#define __INTROSTATE_H__


#include "NState.hpp"
#include "NGame.hpp"

class IntroState: public NState
{
    public:
        IntroState(game_ptr game);
        void Load();
        void Draw();
        void Update();
        void Unload();


    protected:
        void HandleControls();

    private:
        game_ptr _game;

};


#endif
