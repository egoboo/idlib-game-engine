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

/// @file idlib/events/mouse_wheel_turned_event_args.hpp
/// @brief Arguments of a mouse wheel event.
/// @author Michael Heilmann

#pragma once

#include "idlib/events/common.hpp"
#include "idlib/events/event.hpp"
#include "idlib/events/mouse_wheel_event_kind.hpp"

#include "idlib/events/internal/header.in"
	
/// @brief A mouse wheel event.
/// @tparam Kind the event kind
template <mouse_wheel_event_kind Kind>
class mouse_wheel_event final : public event
{
public:
    /// @brief Construct this mouse wheel event with the specified values.
    /// @param delta turn direction and amount
	/// @param time the point in time where the event occcurred. Default value is <c>std::clock()</c>.
	/// @param handled wether the event was handled or not. @a true indicates handled, @a false not handled. Default value is <c>false</c>.
    mouse_wheel_event(const vector_2s& delta, std::clock_t time = std::clock(), bool handled = false)
        : event(time, handled), m_delta(delta)
    {}

	/// @brief Get the kind of the mouse wheel event.
	/// @return the kind of the mouse wheel event
	mouse_wheel_event_kind get_kind() const
	{ return Kind; }

    /// @brief Get the delta.
    /// @return the delta
    const vector_2s& get_delta() const
    { return m_delta; }

	/// @brief Set the delta.
	/// @param delta the delta
	void set_delta(const vector_2s& delta)
	{ m_delta = delta; }
	
private:
    vector_2s m_delta;

}; // class mouse_wheel_event

/// @brief Mouse wheel event raised if a mouse wheel is turned.
using mouse_wheel_turned_event = mouse_wheel_event<mouse_wheel_event_kind::turned>;

#include "idlib/events/internal/footer.in"
