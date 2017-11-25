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
