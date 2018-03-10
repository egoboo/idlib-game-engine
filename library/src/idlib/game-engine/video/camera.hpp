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

/// @file idlib/game-engine/video/camera.hpp
/// @brief Abstract case class of all cameras.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"

namespace idlib {

/// @brief Abstract base class of all cameras.
struct camera
{
public:
    /// @brief Destruct this idlib::camera object.
    virtual ~camera();

    /// @brief Get the view matrix.
    /// @return the view matrix
    virtual const matrix_4s4s& view_matrix() const = 0;

    /// @brief Get the projection matrix of this camera.
    /// @return the projection matrix
    virtual const matrix_4s4s& projection_matrix() const = 0;

    //// @brief Get the position of this camera
    /// @return the position
    virtual const vector_3s& position() const = 0;

    /// @brief Get the up vector of this camera.
    /// @return the up vector
    virtual const vector_3s& up() const = 0;

    /// @brief Get the right vector of this camera.
    /// @return the right vector
    virtual const vector_3s& right() const = 0;

    /// @brief Get the forward vector of this camera.
    /// @return the forward vector
    virtual const vector_3s& forward() const = 0;

protected:
    /// @brief Construct this idlib::camera object.
    camera();

}; // class camera

} // namespace idlib
