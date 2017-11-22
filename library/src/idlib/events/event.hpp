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

/// @file idlib/events/event.cpp
/// @brief Base of all events.
/// @author Michael Heilmann

#pragma once

#include "idlib/events/common.hpp"
#include <ctime>

#include "idlib/events/internal/header.in"

/// @brief Base of all events.
/// Allows for getting/setting the point in time when the event occurred and wether it was handled or not.
class event
{
public:
	/// @brief Constuct this event with the default values.
	/// @remark The default values are std::clock() for the point in time and @a false for wether the event was handled or not.
	event();

	/// @brief Construct this event with the specified values.
	/// @param handled wether the event was handled or not. @a true indicates handled, @a false indicates not handled.
	/// @param time the point in time when the event occurred
	event(std::clock_t time, bool handled);
	
	/// @brief Get the point im time when the event occurred.
	/// @return the point in time
	std::clock_t  get_time() const;
	
	/// @brief Set the point im time when the event occurred.
	/// @param time the point in time
	void set_time(std::clock_t time);

	/// @brief Get wether this event was handled or not.
	/// @return wether this event was handled or not. @a true indicates handled, @a false indicates not handled.
	bool is_handled() const;
	
	/// @brief Set wether this event was handled or not.
	/// @param handled wether this event was handled or not. @a true indicates handled, @a false indicates not handled.
	void set_handled(bool handled);
	
private:
	std::clock_t m_time; ///< @brief The point in time when the event occurred.
	bool m_handled; ///< @brief Weter the event was handled or not.
}; // class event
	
#include "idlib/events/internal/footer.in"
