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


TitleState::TitleState(NGame* game)
{
    _game = game;
}


void TitleState::Load()
{

}


void TitleState::Draw()
{

}


void TitleState::Update()
{

    HandleControls();
}


void TitleState::HandleControls()
{

}


void TitleState::Unload()
{

}
