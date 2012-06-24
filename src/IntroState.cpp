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
#include "NSprite.hpp"

NSprite nyan;


IntroState::IntroState(NGame* game)
{
    _game = game;
}


void IntroState::Load()
{
    nyan.Load("resources/gfx/nyan2.png", 100, 100, 1.f);
    nyan.LoadAnimation(0, 6);
    nyan.SetAnimation(0);
}


void IntroState::Draw()
{
    nyan.Play();
    _game->App->Draw(nyan.surf);
}


void IntroState::Update()
{

    HandleControls();
}


void IntroState::HandleControls()
{
    const sf::Input& Input = _game->App->GetInput();
    
    if (Input.IsKeyDown(sf::Key::Right))
        nyan.surf.Move(3.f, 0.f);
    if (Input.IsKeyDown(sf::Key::Left))
        nyan.surf.Move(-3.f, 0.f);
    if (Input.IsKeyDown(sf::Key::Down))
        nyan.surf.Move(0.f, 3.f);
    if (Input.IsKeyDown(sf::Key::Up))
        nyan.surf.Move(0.f, -3.f);

}


void IntroState::Unload()
{

}
