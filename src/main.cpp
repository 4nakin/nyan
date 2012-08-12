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

    if (!game.Init(render_ptr(&App)))
        return EXIT_FAILURE;

    while (App.isOpen())
    {
    
        sf::Event event;

        while(App.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                App.close();
            else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
            {
                App.close();
            }
        }


        game.Update();
        App.clear();
        game.Draw();

        App.display();
    }

    game.Unload();

    return EXIT_SUCCESS;
}

