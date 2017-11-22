// Copyright Michael Heilmann 2016, 2017.
//
// This file is part of Idlib.
//
// Idlib is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Idlib is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Idlib. If not, see <http://www.gnu.org/licenses/>.

/// @file idlib/events/mouse_pointer_event_kind.hpp
/// @brief Enumeration of the different kinds of mouse pointer events.
/// @author Michael Heilmann

#pragma once

#include "idlib/events/internal/header.in"

/// @brief Enumeration of the different kinds of window events.
enum class mouse_pointer_event_kind
{
	/// @brief Kind of mouse pointer event raised when a mouse pointer enters a window.
	entered,

	/// @brief Kind of a mouse pointer event raised when a mouse pointer leaves a window.
	exited,
	
	/// @brief Kind of a mouse pointer event raised when a mouse pointer moves.
	moved,

}; // struct mouse_pointer_event_kind

#include "idlib/events/internal/footer.in"
