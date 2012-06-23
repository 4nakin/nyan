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
#define __NTSTATE_H__


class NState
{
    public:
        virtual void Load();
        virtual void Draw();
        virtual void Update();
        virtual void Unload();

    protected:
        virtual void HandleControls();
};


#endif
