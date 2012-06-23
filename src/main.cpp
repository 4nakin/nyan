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

int main(int argc, char **argv)
{
    NGame game;

    if (!game.Init())
        return EXIT_FAILURE;

    game.Loop();

    return EXIT_SUCCESS;
}

