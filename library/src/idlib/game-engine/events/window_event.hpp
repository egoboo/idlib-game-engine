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

/// @file idlib/game-engine/events/window_event.hpp
/// @brief Window events.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"
#include "idlib/game-engine/events/event.hpp"
#include "idlib/game-engine/events/window_event_kind.hpp"

#include "idlib/game-engine/events/internal/header.in"

/// @brief A generic window event class.
/// Specializations for all events defined in idlib::events::window_event_kind are provided.
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
