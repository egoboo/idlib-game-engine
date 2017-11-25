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

/// @file idlib/game-engine/winding_mode.hpp
/// @brief An enumeration of winding modes.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"

namespace id {

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
/// @remark std::hash is implemented for id::winding_mode.
enum class winding_mode
{
    /// @brief Clockwise polygons are front-facing.
    clockwise,

    /// @brief Anticlockwise polygons are front-facing.
    anti_clockwise,
}; // enum class winding_mode

} // namespace id

namespace std {
	
template <>
struct hash<id::winding_mode>
{
	size_t operator()(id::winding_mode winding_mode) const;
}; // hash 
	
} // namespace std
