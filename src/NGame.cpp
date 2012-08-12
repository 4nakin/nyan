/*
 * =====================================================================================
 *
 *       Filename:  NGame.cpp
 *
 *
 *       Created:  06/23/2012 04:06:36 PM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */

#include "NGame.hpp"
#include "TitleState.hpp"
#include <SFML/Graphics.hpp>



bool NGame::Init(render_ptr win)
{
    //_curState = NULL;
    App = win;
    App->create(sf::VideoMode(1024, 768, 32), "Game", sf::Style::Fullscreen);
    App->setVerticalSyncEnabled(true);
    App->setKeyRepeatEnabled(false);
    App->setFramerateLimit(60);
    App->setMouseCursorVisible(false);


    SetState(state_ptr(new TitleState(game_ptr(this))));

    return true;
}


void NGame::Update()
{

    _curState->Update();
}


void NGame::Draw()
{

    _curState->Draw();
}



void NGame::SetState(state_ptr state)
{

    if (_curState)
        _curState->Unload();

    _curState = state;
    _curState->Load();
}


void NGame::Unload()
{
    /*if (_curState)
        delete _curState;*/

}
