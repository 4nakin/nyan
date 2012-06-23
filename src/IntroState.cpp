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


IntroState::IntroState(NGame* game)
{
    _game = game;
}


void IntroState::Load()
{

}


void IntroState::Draw()
{

}


void IntroState::Update()
{

    HandleControls();
}


void IntroState::HandleControls()
{
    const sf::Input& Input = _game->App->GetInput();

}


void IntroState::Unload()
{

}
