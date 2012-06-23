/*
 * =====================================================================================
 *
 *       Filename:  TitleState.hpp
 *
 *
 *       Created:  06/23/2012 04:33:49 PM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */

#ifndef __TITLESTATE_H__
#define __TITLESTATE_H__


#include "NState.hpp"


class TitleState: public NState
{
    public:
        void Draw();
        void Load();
        void Update();
        void Unload();

    protected:
        void HandleControls();

};


#endif
