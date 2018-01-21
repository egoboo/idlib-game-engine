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

/// @file idlib/events/events.cpp
/// @brief Idlib: Game Engine - events master include file.

#include "idlib/game-engine/events/events.hpp"

template struct id::events::mouse_button_event<id::events::mouse_button_event_kind::clicked>;
template struct id::events::mouse_button_event<id::events::mouse_button_event_kind::pressed>;
template struct id::events::mouse_button_event<id::events::mouse_button_event_kind::released>;

template struct id::events::keyboard_key_event<id::events::keyboard_key_event_kind::typed>;
template struct id::events::keyboard_key_event<id::events::keyboard_key_event_kind::pressed>;
template struct id::events::keyboard_key_event<id::events::keyboard_key_event_kind::released>;

template struct id::events::mouse_pointer_event<id::events::mouse_pointer_event_kind::entered>;
template struct id::events::mouse_pointer_event<id::events::mouse_pointer_event_kind::exited>;
template struct id::events::mouse_pointer_event<id::events::mouse_pointer_event_kind::moved>;

template struct id::events::mouse_wheel_event<id::events::mouse_wheel_event_kind::turned>;

template struct id::events::window_event<id::events::window_event_kind::resized>;
template struct id::events::window_event<id::events::window_event_kind::shown>;
template struct id::events::window_event<id::events::window_event_kind::hidden>;

template struct id::events::keyboard_event<id::events::keyboard_event_kind::input_focus_received>;
template struct id::events::keyboard_event<id::events::keyboard_event_kind::input_focus_lost>;
