/*
 * =====================================================================================
 *
 *       Filename:  MainState.hpp
 *
 *
 *       Created:  06/24/2012 12:16:36 AM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */


#ifndef __MAINSTATE_H__
#define __MAINSTATE_H__


#include "NState.hpp"
#include "NGame.hpp"

class MainState: public NState
{
    public:
        MainState(game_ptr game);
        ~MainState();
        void Load();
        void Draw();
        void Update();
        void Unload();


    protected:
        void HandleControls();

    private:
        game_ptr _game;
        bool NoKeysDown();

};


#endif
