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

/// @file idlib/game-engine/video/viewport.hpp
/// @brief Abstract case class of all viewports.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"

namespace idlib {

/// @brief Abstract base class of all viewports.
class viewport
{
public:
    /// @brief Destruct this idlib::viewport object.
    virtual  ~viewport();


    /// @brief Get the clear color of this viewport.
    /// @return the clear color
    /// @default The default value is \f$(0, 0, 0, 0)\f$.
    const color_4s& clear_color() const;

    /// @brief Set the clear color of this viewport.
    /// @param clear_color the clear color
    void clear_color(const color_4s& clear_color);


    /// @brief Get if color buffer clear is enabled for this viewport.
    /// @return @a true if color clear is enabled for this viewport, @a false if it is disabled
    /// @default The default value is @a true.
    bool color_clear_enabled() const;

    /// @brief Set if color buffer clear is enabled for this viewport.
    /// @param color_clear_enabled @a true enables color clear, @a false disables it
    void color_clear_enabled(bool depth_clear_enabled);


    /// @brief Get the clear depth of this viewport.
    /// @return the clear depth
    /// @default The default value is \f$1\f$.
    single clear_depth() const;

    /// @brief Set the clear depth of this viewport.
    /// @param clear_depth the clear depth
    void clear_depth(single clear_depth);


    /// @brief Get if depth buffer clear is enabled for this viewport.
    /// @return @a true if depth clear is enabled for this viewport, @a false if it is disabled
    /// @default The default value is @a true.
    bool depth_clear_enabled() const;

    /// @brief Set if depth buffer clear is enabled for this viewport.
    /// @param depth_clear_enabled @a true enables depth buffer clear, @a false disables it
    void depth_clear_enabled(bool depth_clear_enabled);


    /// @brief Get the relative rectangle of this viewport.
    /// @return the relative rectangle of this viewport
    /// @default The default value is \f$(0, 0, 1, 1)\f$
    const rectangle_2s& relative_rectangle() const;

    /// @brief Set the relative rectangle of this viewport.
    /// @param relative_rectangle the relative rectangle
    void relative_rectangle(const rectangle_2s& relative_rectangle);
    
protected:
    /// @brief Construct this idlib::viewport object.
    viewport();

    /// @brief The clear color of this viewport.
    color_4s m_clear_color;

    /// @brief Wether color clear is enabled for this viewport.
    bool m_color_clear_enabled;

    /// @brief The clear depth of the viewport.
    single m_clear_depth;

    /// @brief Wether depth clear is enabled for this viewport.
    bool m_depth_clear_enabled;

    /// @brief The relative rectangle of this viewport.
    rectangle_2s m_relative_rectangle;

}; // struct viewport

} // namespace idlib
