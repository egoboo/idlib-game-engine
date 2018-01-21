///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Idlib: Game Engine
// Copyright (C) 2017-2018 Michael Heilmann
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

/// @file idlib/game-engine/events/event.cpp
/// @brief Base of all events.
/// @author Michael Heilmann

#include "idlib/game-engine/events/event.hpp"

#include "idlib/game-engine/events/internal/header.in"

event::event()
	: event(std::clock(), false)
{}

event::event(std::clock_t time, bool handled)
	: m_time(time), m_handled(handled)
{}

bool event::is_handled() const
{ return m_handled; }

void event::set_handled(bool handled)
{ m_handled = handled; }

std::clock_t  event::get_time() const
{ return m_time; }

void event::set_time(std::clock_t  time)
{ m_time = time; }
	
#include "idlib/game-engine/events/internal/footer.in"
