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

/// @file idlib/game-engine/pixel_format.hpp
/// @brief Enumeration of pixel formats.
/// @author Michael Heilmann

#pragma once

namespace id {
	
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
	
} // namespace id
