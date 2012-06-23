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

TitleState::TitleState(NGame* game)
{
    _game = game;
}


void TitleState::Load()
{
   img.Load("resources/gfx/intro.jpg"); 
}


void TitleState::Draw()
{
    _game->App->Draw(img.surf);
}


void TitleState::Update()
{

    HandleControls();
}


void TitleState::HandleControls()
{
    const sf::Input& Input = _game->App->GetInput();

    if (Input.IsKeyDown(sf::Key::Space))
        _game->SetState(new IntroState(_game));
}


void TitleState::Unload()
{

}
