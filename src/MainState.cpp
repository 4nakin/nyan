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
#include "NyanCat.hpp"
#include "NImage.hpp"
#include "Zombie.hpp"
#include <SFML/Audio.hpp>
#include <sstream>

NyanCat nyan;
Zombie zombie;
NImage bg;
sf::Music bgMusic;

MainState::MainState(game_ptr game)
{
    _game = game;

}


MainState::~MainState()
{

}


void MainState::Load()
{
    nyan.Load();
    zombie.Load();
    zombie.SetAnimation(Z_FORWARD);

    bg.Load("resources/gfx/bg.png");

    bgMusic.openFromFile("resources/sounds/chase.ogg");
    bgMusic.setLoop(true);
    bgMusic.play();
}


void MainState::Draw()
{
    _game->App->draw(bg.surf);
    nyan.Play();
    zombie.Play();
    _game->App->draw(nyan.surf);
    _game->App->draw(zombie.surf);
}


void MainState::Update()
{

    //_game->world.Step(1.0f/ 60.0f, 6, 2);
    HandleControls();
}


void MainState::HandleControls()
{
    //const sf::Input& Input = _game->App->GetInput();

    if (NoKeysDown())
    {
        nyan.Still();
    }
    else
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            nyan.Move(RIGHT);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            nyan.Move(LEFT);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            nyan.Move(DOWN);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            nyan.Move(UP);

        //debugString.setString("Keys!");
    }

}


void MainState::Unload()
{

}


bool MainState::NoKeysDown()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        return false;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        return false;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        return false;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        return false;

    return true;
}
