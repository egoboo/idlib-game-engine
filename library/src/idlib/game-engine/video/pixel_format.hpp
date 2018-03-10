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

/// @file idlib/game-engine/pixel_format.hpp
/// @brief Enumeration of pixel formats.
/// @author Michael Heilmann

#pragma once

namespace idlib {

/// @brief Enumeration of canonical identifiers for a pixel formats.
enum class pixel_format
{
    /// @brief
    /// A pixel consists of 3 Bytes \f$x_0\f$, \f$x_1\f$, and \f$x_2\f$
    /// at consecutive addresses in memory such that if \f$a\f$ is the
    /// address of the pixel then
    /// the address of \f$x_0\f$ is \f$a(x_0) = a + 0\f$,
    /// the address of \f$x_1\f$ is \f$a(x_1) = a + 1\f$, and
    /// the address of \f$x_2\f$ is \f$a(x_2) = a + 2\f$.
    /// The value of \f$x_0\f$ denotes the value of the blue component,
    /// the value of \f$x_1\f$ the value of the green component, and
    /// the value of \f$x_2\f$ the value of the red component.
    /// All component values are within the range of \f$[0,255]\f$
    /// where \f$0\f$ indicates the minimum intensity and \f$255\f$ the maximum intensity.
    B8G8R8,

    /// @brief
    /// A pixel consists of 4 Bytes \f$x_0\f$, \f$x_1\f$, \f$x_2\f$, and \f$x_3\f$
    /// at consecutive addresses in memory such that if \f$a\f$ is the
    /// address of the pixels then
    /// the address of \f$x_0\f$ is \f$a(x_0) = a + 0\f$,
    /// the address of \f$x_1\f$ is \f$a(x_1) = a + 1\f$,
    /// the address of \f$x_2\f$ is \f$a(x_2) = a + 2\f$, and
    /// the address of \f$x_3\f$ is \f$a(x_3) = a + 3\f$.
    /// The value of \f$x_0\f$ denotes the value of the blue component,
    /// the value of \f$x_1\f$ the value of the green component,
    /// the value of \f$x_2\f$ the value of the red component, and
    /// the value of \f$x_3\f$ the value of the alpha component.
    /// All component values are within the range of \f$[0,255]\f$
    /// where \f$0\f$ indicates the minimum intensity and \f$255\f$ the maximum intensity.
    B8G8R8A8,

    /// @brief
    /// A pixel consists of 3 Bytes \f$x_0\f$, \f$x_1\f$, and \f$x_2\f$
    /// at consecutive addresses in memory such that if \f$a\f$ is the
    /// address of the pixel then
    /// the address of \f$x_0\f$ is \f$a(x_0) = a + 0\f$,
    /// the address of \f$x_1\f$ is \f$a(x_1) = a + 1\f$, and
    /// the address of \f$x_2\f$ is \f$a(x_2) = a + 2\f$.
    /// The value of \f$x_0\f$ denotes the value of the red component,
    /// the value of \f$x_1\f$ the value of the green component, and
    /// the value of \f$x_2\f$ the value of the blue component.
    /// All component values are within the range of \f$[0,255]\f$
    /// where \f$0\f$ indicates the minimum intensity and \f$255\f$ the maximum intensity.
    R8G8B8,

    /// @brief
    /// A pixel consists of 4 Bytes \f$x_0\f$, \f$x_1\f$, \f$x_2\f$, and \f$x_3\f$
    /// at consecutive addresses in memory such that if \f$a\f$ is the
    /// address of the pixels then
    /// the address of \f$x_0\f$ is \f$a(x_0) = a + 0\f$,
    /// the address of \f$x_1\f$ is \f$a(x_1) = a + 1\f$,
    /// the address of \f$x_2\f$ is \f$a(x_2) = a + 2\f$, and
    /// the address of \f$x_3\f$ is \f$a(x_3) = a + 3\f$.
    /// The value of \f$x_0\f$ denotes the value of the red component,
    /// the value of \f$x_1\f$ the value of the green component,
    /// the value of \f$x_2\f$ the value of the blue component, and
    /// the value of \f$x_3\f$ the value of the alpha component.
    /// All component values are within the range of \f$[0,255]\f$
    /// where \f$0\f$ indicates the minimum intensity and \f$255\f$ the maximum intensity.
    R8G8B8A8,

    /// @brief
    /// A pixel consists of 4 Bytes \f$x_0\f$, \f$x_1\f$, \f$x_2\f$, and \f$x_3\f$
    /// at consecutive addresses in memory such that if \f$a\f$ is the
    /// address of the pixels then
    /// the address of \f$x_0\f$ is \f$a(x_0) = a + 0\f$,
    /// the address of \f$x_1\f$ is \f$a(x_1) = a + 1\f$,
    /// the address of \f$x_2\f$ is \f$a(x_2) = a + 2\f$, and
    /// the address of \f$x_3\f$ is \f$a(x_3) = a + 3\f$.
    /// The value of \f$x_0\f$ denotes the value of the alpha component,
    /// the value of \f$x_1\f$ the value of the blue component,
    /// the value of \f$x_2\f$ the value of the green component, and
    /// the value of \f$x_3\f$ the value of the red component.
    /// All component values are within the range of \f$[0,255]\f$
    /// where \f$0\f$ indicates the minimum intensity and \f$255\f$ the maximum intensity.
    A8B8G8R8,

    /// @brief
    /// A pixel consists of 4 Bytes \f$x_0\f$, \f$x_1\f$, \f$x_2\f$, and \f$x_3\f$
    /// at consecutive addresses in memory such that if \f$a\f$ is the
    /// address of the pixels then
    /// the address of \f$x_0\f$ is \f$a(x_0) = a + 0\f$,
    /// the address of \f$x_1\f$ is \f$a(x_1) = a + 1\f$,
    /// the address of \f$x_2\f$ is \f$a(x_2) = a + 2\f$, and
    /// the address of \f$x_3\f$ is \f$a(x_3) = a + 3\f$.
    /// The value of \f$x_0\f$ denotes the value of the alpha component,
    /// the value of \f$x_1\f$ the value of the red component,
    /// the value of \f$x_2\f$ the value of the green component, and
    /// the value of \f$x_3\f$ the value of the blue component.
    /// All component values are within the range of \f$[0,255]\f$
    /// where \f$0\f$ indicates the minimum intensity and \f$255\f$ the maximum intensity.
    A8R8G8B8,

}; // enum class pixel_format

} // namespace idlib
