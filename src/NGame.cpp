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
#include <SFML/Graphics.hpp>

static sf::RenderWindow App;


bool NGame::Init()
{

    App.Create(sf::VideoMode(1024, 768, 32), "Game", sf::Style::Close);

    App.UseVerticalSync(true);
    App.EnableKeyRepeat(true);
    App.SetFramerateLimit(60);

    return true;
}


void NGame::Loop()
{
    while (App.IsOpened())
    {
        sf::Event gameEvent;
        while (App.GetEvent(gameEvent))
        {
            if (gameEvent.Type == sf::Event::Closed)
                App.Close();
        }

        Update();

        App.Clear();

        Draw();

        App.Display();
    }
}



void NGame::Update()
{

}


void NGame::Draw()
{


}
