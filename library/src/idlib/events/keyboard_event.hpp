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
#include "idlib/events/keyboard_event_kind.hpp"

#include "idlib/events/internal/header.in"

/// @brief A keyboard event.
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

}; // class keyboard_event

/// @brief Arguments of a keyboard event raised if something receives the keyboard input focus.
using keyboard_input_focus_received_event = keyboard_event<keyboard_event_kind::input_focus_received>;

/// @brief Arguments of a keyboard  event raised if something receives the keyboard input focus.
using keyboard_input_focus_lost_event = keyboard_event<keyboard_event_kind::input_focus_lost>;

#include "idlib/events/internal/footer.in"
