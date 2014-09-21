/*----------------------------------------------------------------------------
  chugl
  Chuck OpenGL library module

  Copyright (c) 2014 Spencer Salazar.  All rights reserved.
  https://ccrma.stanford.edu/~spencer/

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
  U.S.A.
-----------------------------------------------------------------------------*/

#ifndef CHUGL_H
#define CHUGL_H

#include "chuck_dl.h"
#include "chuck_def.h"

class chugl
{
public:
    
    static chugl *platformMake(); // defined by subclass
    
    chugl();
    virtual ~chugl();
        
    t_CKBOOL good() const { return m_good; }
    
    virtual void openWindow(t_CKFLOAT width, t_CKFLOAT height) = 0;
    virtual void openFullscreen() = 0;
    
    virtual void lock() = 0;
    virtual void unlock() = 0;
    t_CKBOOL locked() const { return m_lock > 0; }
    
    t_CKFLOAT windowWidth() const { return m_windowWidth; }
    t_CKFLOAT windowHeight() const { return m_windowHeight; }
    
protected:
    void (*m_Chuck_UI_Manager_start)();
    t_CKINT m_lock;
    t_CKBOOL m_good;
    t_CKFLOAT m_windowWidth, m_windowHeight;
};

#endif // CHUGL_H
