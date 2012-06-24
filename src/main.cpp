/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    	  Description:  Game loop
 *
 *       Created:  06/23/2012 01:53:39 PM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */
#include "NGame.hpp"
#include <cstdlib>
#include <SFML/Graphics.hpp>


int main(int argc, char **argv)
{
    sf::RenderWindow App;
    NGame game;

    if (!game.Init(&App))
        return EXIT_FAILURE;

    while (App.IsOpened())
    {
    
        sf::Event event;
        while(App.GetEvent(event))
        {
            if (event.Type == sf::Event::Closed)
                App.Close();
            else if (event.Type == sf::Event::KeyPressed && event.Key.Code == sf::Key::Escape)
            {
                App.Close();
            }
        }


        game.Update();
        App.Clear();
        game.Draw();

        App.Display();
    }

    game.Unload();

    return EXIT_SUCCESS;
}

