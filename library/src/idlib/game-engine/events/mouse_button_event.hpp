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

/// @file idlib/game-engine/events/mouse_button_event_args.hpp
/// @brief Mouse button events.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"
#include "idlib/game-engine/events/event.hpp"
#include "idlib/game-engine/events/mouse_button_event_kind.hpp"

#include "idlib/game-engine/events/internal/header.in"

/// @brief A generic mouse button event class.
/// Specializations for all events defined in idlib::events::mouse_button_event are provided.
/// @tparam Kind the event kind
template <mouse_button_event_kind Kind>
struct mouse_button_event final : public event
{
public:
    /// @brief Construct these mouse button event arguments with the specified values.
    /// @param position the mouse pointer position at the point in time where the event occurred
    /// @param button the mouse button the event pertains to
	/// @param time the point in time where the event occcurred. The default value is <c>std::clock()</c>.
	/// @param handled wether the event was handled or not. @a true indicates handled, @a false not handled. Default value is <c>false</c>.
    mouse_button_event(const point_2s& position, int button, std::clock_t time = std::clock(), bool handled = false)
        : event(time, handled), m_position(position), m_button(button)
    {}

    /// @brief Get the kind of the mouse button event.
    /// @return the kind of the mouse button event
    mouse_button_event_kind get_kind() const
    { return Kind; }

    /// @brief Get the mouse pointer position at the point in time where the event occurred.
    /// @return the mouse pointer position
    const point_2s& get_position() const
    { return m_position; }

    /// @brief Set the mouse pointer position at the point in time where the event occurred.
    /// @param position the mouse pointer position
    void set_position(const point_2s& position)
    { m_position = position; }

    /// @brief Get the mouse button the event pertains to.
    /// @return the mouse button
    int get_button() const
    { return m_button; }

	/// @brief Set the mouse button the event pertains to.
	void set_button(int button)
	{ m_button = button; }
	
private:
    /// @brief The position of the mouse.
    point_2s m_position; ///< @brief The mouse pointer position at the point in time where the event occurred.

    /// @brief The mouse button.
    int m_button; ///< @brief The mouse button the event pertains to.
	
}; // struct mouse_button_event

/// @brief Arguments of a mouse button event raised if a mouse button was clicked (pressed and released).
using mouse_button_clicked_event = mouse_button_event<mouse_button_event_kind::clicked>;

/// @brief Arguments of a mouse button event raised if a mouse button was pressed.
using mouse_button_pressed_event = mouse_button_event<mouse_button_event_kind::pressed>;

/// @brief Arguments of a mouse button event raised if a mouse button was released.
using mouse_button_released_event = mouse_button_event<mouse_button_event_kind::released>;

#include "idlib/game-engine/events/internal/footer.in"
