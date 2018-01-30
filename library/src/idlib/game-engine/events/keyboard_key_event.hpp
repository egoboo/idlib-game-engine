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

/// @file idlib/game-engine/events/keyboard_key_event_args.hpp
/// @brief Keyboard key events.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"
#include "idlib/game-engine/events/event.hpp"
#include "idlib/game-engine/events/keyboard_key_event_kind.hpp"

#include "idlib/game-engine/events/internal/header.in"

/// @brief A generic keyboard key event class.
/// Specializations for all events defined in idlib::events::keyboard_key_event_kind are provided.
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

}; // struct keyboard_key_event

/// @brief Arguments of a keyboard key event raised if a keyboard key was typed (pressed and released).
using keyboard_key_typed_event = keyboard_key_event<keyboard_key_event_kind::typed>;

/// @brief Arguments of a keyboard key event raised if a keyboard key was pressed.
using keyboard_key_pressed_event = keyboard_key_event<keyboard_key_event_kind::pressed>;

/// @brief Arguments of a keyboard key event raised if a keyboard key was released.
using keyboard_key_released_event = keyboard_key_event<keyboard_key_event_kind::released>;

#include "idlib/game-engine/events/internal/footer.in"
