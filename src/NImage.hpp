/*
 * =====================================================================================
 *
 *       Filename:  NImage.hpp
 *
 *
 *       Created:  06/23/2012 06:19:20 PM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */


#ifndef __NIMAGE_H__
#define __NIMAGE_H__

#include <string>
#include <SFML/Graphics.hpp>


class NImage
{
    public:
       void Load(std::string name);

       sf::Sprite surf;
       sf::Image img;
       sf::Texture tex;
        
};


#endif
