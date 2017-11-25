// Copyright Michael Heilmann 2016, 2017.
//
// This file is part of Idlib: Game Engine.
//
// Idlib: Game Engine is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Idlib: Game Engine is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Idlib: Game Engine. If not, see <http://www.gnu.org/licenses/>.

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
