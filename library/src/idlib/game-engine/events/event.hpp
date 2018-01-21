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

/// @file idlib/game-engine/events/event.cpp
/// @brief Base of all events.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"
#include <ctime>

#include "idlib/game-engine/events/internal/header.in"

/// @brief Base of all events.
/// Allows for getting/setting the point in time when the event occurred and wether it was handled or not.
struct event
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
}; // struct event
	
#include "idlib/game-engine/events/internal/footer.in"
