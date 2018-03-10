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

/// @file idlib/game-engine/video/window.hpp
/// @brief Abstract windowing.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/events/events.hpp"
#include "idlib/signal.hpp"

namespace idlib {

/// @brief Abstract base of all windows.
class window
{
public:
    /// @brief Signal raised if this window was resized.
    signal<void(const events::window_resized_event&)> window_resized;

    /// @brief Signal raised if the mouse pointer entered this window.
    signal<void(const events::mouse_pointer_entered_event&)> mouse_pointer_entered;

    /// @brief Signal raised if the mouse pointer exited this window.
    signal<void(const events::mouse_pointer_exited_event&)> mouse_pointer_exited;

    /// @brief Signal raised if this window received the keyboard input focus.
    signal<void(const events::keyboard_input_focus_received_event&)> keyboard_input_focus_received;

    /// @brief Signal raised if this window lost the keyboard input focus.
    signal<void(const events::keyboard_input_focus_lost_event&)> keyboard_input_focus_lost;

    /// @brief Signal raised if this window was shown.
    signal<void(const events::window_shown_event&)> window_shown;

    /// @brief Signal raised if this window was hidden.
    signal<void(const events::window_hidden_event&)> window_hidden;

    /// @brief Destruct this window.
    virtual ~window();

    /// @brief Set the title of this window.
    /// @param title the title
    virtual void title(const std::string& title) = 0;

    /// @brief Get the title of this window.
    /// @return the title
    virtual std::string title() const = 0;

    /// @brief Set if grab mode is enabled for this window.
    /// @param enabled @a true to enable grab mode for this window, @a false to disable it for this window
    /// @remark If grab mode is enabled, then the mouse is confined to the window.
    /// If grab mode is enabled for a window, grab mode is disabled for all ther windows.
    virtual void grab_enabled(bool enabled) = 0;

    /// @brief Get if grab mode is enabled for this window.
    /// @return @a true if grab mode is enabled for this window, @a false if it is disabled for this window
    virtual bool grab_enabled() const = 0;

    /// @brief Get the size of this window.
    /// @return the size of this window
    virtual vector_2s size() const = 0;

    /// @brief Set the size of this window.
    /// @param size the size of this window
    virtual void size(const vector_2s& size) = 0;

    /// @brief Get the position, in screen coordinates, of the left/top corner of this window.
    /// @return the position, in screen coordinates, of the left/top corner of this window
    virtual point_2s position() const = 0;

    /// @brief Set the position, in screen coordinates, of the left/top corner of this window.
    /// @param position the position, in screen coordinates, of the left/top corner of this window
    virtual void position(const point_2s& position) = 0;

    /// @brief Center the window in its parent.
    virtual void center() = 0;

    /// @brief Get the size of the drawable of this window.
    /// @return the size of the drawable of this window
    virtual vector_2s drawable_size() const = 0;

    /// @brief Update this window.
    virtual void update() = 0;

protected:

    /// @brief Construct this window.
    window();

}; // class window

} // namespace idlib
