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
#include "idlib/game-engine/events/keyboard_event_kind.hpp"

#include "idlib/game-engine/events/internal/header.in"

/// @brief A generic keyboard event class.
/// Specializations for all events defined in id::events::keyboard_event_kind are provided.
/// @tparam Kind the event kind
template <keyboard_event_kind Kind>
struct keyboard_event final : public event
{
public:
    /// @brief Construct this keyboard event.
	/// @param time the point in time where the event occcurred. The default value is <c>std::clock()</c>
	/// @param handled wether the event was handled or not. @a true indicates handled, @a false not handled. Default value is <c>false</c>.
    explicit keyboard_event(std::clock_t time = std::clock(), bool handled = false)
        : event(time, handled)
    {}

    /// @brief Get the kind of the keyboard event.
    /// @return the kind of the keyboard event
    keyboard_event_kind kind() const
    { return Kind; }

}; // struct keyboard_event

/// @brief Arguments of a keyboard event raised if something receives the keyboard input focus.
using keyboard_input_focus_received_event = keyboard_event<keyboard_event_kind::input_focus_received>;

/// @brief Arguments of a keyboard  event raised if something receives the keyboard input focus.
using keyboard_input_focus_lost_event = keyboard_event<keyboard_event_kind::input_focus_lost>;

#include "idlib/game-engine/events/internal/footer.in"
