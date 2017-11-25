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

/// @file idlib/game-engine/events/window_event.hpp
/// @brief Window events.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"
#include "idlib/game-engine/events/event.hpp"
#include "idlib/game-engine/events/window_event_kind.hpp"

#include "idlib/game-engine/events/internal/header.in"

/// @brief A generic window event class.
/// Specializations for all events defined in id::events::window_event_kind are provided.
/// @tparam Kind the event kind
template <window_event_kind Kind>
struct window_event final : public event
{
public:
	/// @brief Construct this window event.
	/// @param time the point in time where the event occcurrred. Default value is <c>std::clock()</c>.
	/// @param handled wether the event was handled or not. @a true indicates handled, @a false not handled. Default value is <c>false</c>.
	window_event(std::clock_t time = std::clock(), bool handled = false)
		: event(time, handled)
	{}

    /// @brief Get the kind of the window event.
    /// @return the kind of the window event
    window_event_kind get_kind() const
    { return Kind; }

}; // struct window_event

/// @brief The arguments of a window event raised if a window was resized.
using window_resized_event = window_event<window_event_kind::resized>;

/// @brief The arguments of a window event raised if a window was shown.
using window_shown_event = window_event<window_event_kind::shown>;

/// @brief The arguments of a window event raised if a window was hidden.
using window_hidden_event = window_event<window_event_kind::hidden>;

#include "idlib/game-engine/events/internal/footer.in"
