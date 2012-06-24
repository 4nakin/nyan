/*
 * =====================================================================================
 *
 *       Filename:  MainState.cpp
 *
 *
 *       Created:  06/24/2012 12:18:18 AM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */

#include "MainState.hpp"
#include "NSprite.hpp"
#include "NImage.hpp"
#include <SFML/Audio.hpp>

NSprite nyan;
NImage bg;
sf::Music bgMusic;

MainState::MainState(NGame* game)
{
    _game = game;
}


void MainState::Load()
{
    nyan.Load("resources/gfx/nyan2.png", 100, 100, 1.f);
    nyan.LoadAnimation(0, 6);
    nyan.SetAnimation(0);

    bg.Load("resources/gfx/level.jpg");

    bgMusic.OpenFromFile("resources/sounds/main.ogg");
    bgMusic.Play();
}


void MainState::Draw()
{
    _game->App->Draw(bg.surf);
    nyan.Play();
    _game->App->Draw(nyan.surf);
}


void MainState::Update()
{

    HandleControls();
}


void MainState::HandleControls()
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


void MainState::Unload()
{

}
