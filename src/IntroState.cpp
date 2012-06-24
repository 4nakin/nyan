/*
 * =====================================================================================
 *
 *       Filename:  IntroState.cpp
 *
 *
 *       Created:  06/23/2012 07:41:12 PM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */

#include "IntroState.hpp"
#include "MainState.hpp"
#include "NSprite.hpp"
#include <SFML/Audio.hpp>

NSprite introImage;

IntroState::IntroState(game_ptr game)
{
    _game = game;
}


void IntroState::Load()
{
    introImage.Load("resources/gfx/intro_creds.png", 1024, 768, 1.f);
    introImage.surf.SetY(1024);
}


void IntroState::Draw()
{

    _game->App->Draw(introImage.surf);
}


void IntroState::Update()
{

    if (introImage.surf.GetPosition().y > 0)
        introImage.surf.Move(0.f, -1.f);
    HandleControls();
}


void IntroState::HandleControls()
{
    const sf::Input& Input = _game->App->GetInput();
    
    if (Input.IsKeyDown(sf::Key::Return))
        _game->SetState(state_ptr(new MainState(_game)));

}


void IntroState::Unload()
{

}
