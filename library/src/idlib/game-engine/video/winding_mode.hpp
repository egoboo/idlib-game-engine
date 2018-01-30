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

/// @file idlib/game-engine/winding_mode.hpp
/// @brief An enumeration of winding modes.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"

namespace idlib {

/// @brief An enumeration of winding modes.
/// @remark
/// The projection of a polygon to window coordinates is said to have clockwise winding if an
/// imaginary object following the path from its first vertex, its second vertex, and so on, to its
/// last vertex, and finally back to its first vertex, moves in a clockwise direction about the
/// interior of the polygon. The polygon's winding is said to be anticlockwise if the imaginary
/// object following the same path moves in a anticlockwise direction about the interior of the
/// polygon.
///
/// The winding mode specifies whether polygons with clockwise winding in window coordinates, or
/// anticlockwise winding in window coordinates, are taken to be front-facing. Certain operations -
/// in particular but not restricted to culling and tesselation - are influenced by the polygon
/// winding.
/// @remark std::hash is implemented for idlib::winding_mode.
enum class winding_mode
{
    /// @brief Clockwise polygons are front-facing.
    clockwise,

    /// @brief Anticlockwise polygons are front-facing.
    anti_clockwise,
}; // enum class winding_mode

} // namespace idlib

namespace std {
	
template <>
struct hash<idlib::winding_mode>
{
	size_t operator()(idlib::winding_mode winding_mode) const;
}; // hash 
	
} // namespace std
