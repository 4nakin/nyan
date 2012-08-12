/*
 * =====================================================================================
 *
 *       Filename:  TitleState.cpp
 *
 *
 *       Created:  06/23/2012 04:37:13 PM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */

#include "TitleState.hpp"
#include "IntroState.hpp"
#include "NImage.hpp"

NImage img;

TitleState::TitleState(game_ptr game)
{
    _game = game;
}


void TitleState::Load()
{
   img.Load("resources/gfx/intro.jpg"); 
}


void TitleState::Draw()
{
    _game->App->draw(img.surf);
}


void TitleState::Update()
{

    HandleControls();
}


void TitleState::HandleControls()
{
    
    //const sf::Input& Input = _game->App->GetInput();

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        _game->SetState(state_ptr(new IntroState(_game)));
}


void TitleState::Unload()
{

}
