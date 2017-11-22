// Copyright Michael Heilmann 2016, 2017.
//
// This file is part of Egoboo Engine.
//
// Egoboo Engine is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Egoboo Engine is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Idlib. If not, see <http://www.gnu.org/licenses/>.

/// @file idlib/events/mouse_wheel_event_kind.hpp
/// @brief Enumeration of the different kinds of mouse wheel events.
/// @author Michael Heilmann

#pragma once

#include "idlib/events/internal/header.in"

/// @brief Enumeration of the different kinds of mouse wheel events.
enum class mouse_wheel_event_kind
{
	/// @brief Kind of a mouse wheel event raised when a mouse wheel turns.
	turned,

}; // enum class mouse_wheel_event_kind

#include "idlib/events/internal/footer.in"
