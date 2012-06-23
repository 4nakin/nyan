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



bool NGame::Init(sf::RenderWindow* win)
{
    _curState = NULL;
    App = win;

    App->Create(sf::VideoMode(1024, 768, 32), "Game", sf::Style::Close);

    App->UseVerticalSync(true);
    App->EnableKeyRepeat(true);
    App->SetFramerateLimit(60);


    SetState(new TitleState(this));

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



void NGame::SetState(NState* state)
{

    if (_curState)
        _curState->Unload();

    _curState = state;
    _curState->Load();
}


void NGame::Unload()
{
    if (_curState)
        delete _curState;

}
