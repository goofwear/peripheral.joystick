/*
 *      Copyright (C) 2014-2015 Garrett Brown
 *      Copyright (C) 2014-2015 Team XBMC
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

#include "api/IJoystickInterface.h"

namespace JOYSTICK
{
  class CJoystickInterfaceXInput : public IJoystickInterface
  {
  public:
    CJoystickInterfaceXInput(void) { }
    virtual ~CJoystickInterfaceXInput(void) { Deinitialize(); }

    // Implementation of IJoystickInterface
    virtual const char* Name(void) const override;
    virtual bool Initialize(void) override;
    virtual void Deinitialize(void) override;
    virtual bool SupportsRumble(void) const override { return true; }
    virtual bool SupportsPowerOff(void) const override;
    virtual bool ScanForJoysticks(JoystickVector& joysticks) override;
  };
}
