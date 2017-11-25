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

/// @file idlib/game-engine/events/mouse_button_event_kind.hpp
/// @brief Enumeration of the different kinds of mouse button events.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/events/internal/header.in"

/// @brief Enumeration of the different kinds of mouse button events.
enum class mouse_button_event_kind
{
    /// @brief Kind of a mouse button event raised when a mouse button is pressed.
    pressed,

    /// @brief Kind of a mouse button event raised when a mouse button is released.
    released,

    /// @brief Kind of a mouse button event raised when a mouse button is clicked.
    clicked,

}; // enum class mouse_button_event_kind

#include "idlib/game-engine/events/internal/footer.in"
