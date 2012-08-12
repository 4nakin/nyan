/*
 * =====================================================================================
 *
 *       Filename:  NImage.cpp
 *
 *
 *       Created:  06/23/2012 07:07:46 PM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */

#include "NImage.hpp"
#include "NGame.hpp"


void NImage::Load(std::string name)
{
    img.loadFromFile(name);
    tex.loadFromImage(img);
    surf.setTexture(tex);

}

