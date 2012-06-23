/*
 * =====================================================================================
 *
 *       Filename:  NState.hpp
 *
 *       Description:  Abstract Game state base class
 *
 *       Created:  06/23/2012 03:28:18 PM
 *       Compiler:  gcc
 *
 *       Author:  Andrew De Stefano, andrew.destef@gmail.com
 *
 * =====================================================================================
 */

#ifndef __NSTATE_H__
#define __NSTATE_H__


class NState
{
    public:
        virtual void Load() = 0;
        virtual void Draw() = 0;
        virtual void Update() = 0;
        virtual void Unload() = 0;

    protected:
        virtual void HandleControls() = 0;
};


#endif
