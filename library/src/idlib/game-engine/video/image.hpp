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

/// @file idlib/game-engine/video/image.hpp
/// @brief Abstract base class of all images.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/video/pixel_format.hpp"

namespace idlib {

/// @brief Abstract base class of all images.
class image
{
public:
    /// @brief Destruct this idlib::image object.
    virtual ~image();

    /// @brief Get a pointer to the pixels of this image.
    /// @return a pointer to the pixels of this image
    virtual void *get_pixels() = 0;

    /// @brief Get the pixel format of this image.
    /// @return the pixel format of this image
    virtual pixel_format get_pixel_format() const = 0;

    /// @brief Get the size, in Bytes, of a pixel.
    /// @return the size, in Bytes, of a pixel
    virtual int get_bytes_per_pixel() const = 0;

    /// @brief Get the width, in pixels, of this image.
    /// @return the width
    /// @remark The width is always non-negative.
    virtual int get_width() const = 0;

    /// @brief Get the height, in pixels, of this image.
    /// @return the height
    /// @remark The height is always non-negative.
    virtual int get_height() const = 0;

    /// @brief Get the pitch, in pixels, of this image.
    /// @return the pitch
    /// @remark The pitch is always non-negative.
    virtual int get_pitch() const = 0;

    /// @brief Get if this image has an alpha component.
    /// @return @a true if this image has an alpha component, @a false otherwise
    virtual bool has_alpha() const = 0;

protected:
    /// @brief Construct this idlib::image object.
    image();

}; // class image

} // namespace idlib
