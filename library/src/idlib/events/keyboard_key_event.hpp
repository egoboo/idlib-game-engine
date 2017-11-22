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

/// @file idlib/events/keyboard_key_event_args.hpp
/// @brief Arguments of a keyboard key event.
/// @author Michael Heilmann

#pragma once

#include "idlib/events/common.hpp"
#include "idlib/events/event.hpp"
#include "idlib/events/keyboard_key_event_kind.hpp"

#include "idlib/events/internal/header.in"

/// @brief The event arguments for a keyboard key event.
/// @tparam Kind the event kind
template <keyboard_key_event_kind Kind>
struct keyboard_key_event final : public event
{
public:
    /// @brief Construct these keyboard key event arguments with the specified values.
    /// @param key the keyboard key
	/// @param time the point in time at which the event occurred. The default value is <c>std::clock()</c>.
	/// @param handled wether the event was handled or not handled. @a true indicates handled, @a false not handled. Default is @a false.
    explicit keyboard_key_event(int key, std::clock_t time = std::clock(), bool handled = false)
        : event(time, handled), m_key(key)
    {}
	
    /// @brief Get the keyboard key the event pertains to.
    /// @return the keyboard key
    int get_key() const
    { return m_key; }
	
	/// @brief Set the keyboard key th event pertains to.
	/// @param key the keyboard key
	void set_key(int key)
	{ m_key = key; }

    /// @brief Get the kind of the keyboard key event.
    /// @return the kind of the keyboard key event
    keyboard_key_event_kind kind() const
    { return Kind; }
	
private:
    int m_key;

}; // class keyboard_key_event

/// @brief Arguments of a keyboard key event raised if a keyboard key was typed (pressed and released).
using keyboard_key_typed_event = keyboard_key_event<keyboard_key_event_kind::typed>;

/// @brief Arguments of a keyboard key event raised if a keyboard key was pressed.
using keyboard_key_pressed_event = keyboard_key_event<keyboard_key_event_kind::pressed>;

/// @brief Arguments of a keyboard key event raised if a keyboard key was released.
using keyboard_key_released_event = keyboard_key_event<keyboard_key_event_kind::released>;

#include "idlib/events/internal/footer.in"
