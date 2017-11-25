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

/// @file idlib/game-engine/events/keyboard_event_kind.hpp
/// @brief Enumeration of the different kinds of keyboard events.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/events/internal/header.in"

/// @brief Enumeration of the different kinds of keyboard events.
enum class keyboard_event_kind
{
	/// @brief Kind of a keyboard event raised when something receives the keyboard input focus.
	input_focus_received,
	
	/// @brief Kind of a keyboard event raised when something loses the keyboard input focus.
	input_focus_lost,

}; // enum class keyboard_event_kind

#include "idlib/game-engine/events/internal/footer.in"
