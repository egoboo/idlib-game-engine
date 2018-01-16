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

/// @file idlib/game-engine/video/culling_mode.hpp
/// @brief Enumeration of culling modes.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"

namespace id {

/// @brief An enumeration of culling modes.
/// @remark std::hash is implemented for id::culling_mode.
enum class culling_mode
{
    /// @brief Neither front-facing nor back-facing polygons are culled.
    none,

    /// @brief Front-facing polygons are culled.
    front,

    /// @brief Back-facing polygons are culled.
    back,

    /// @brief Back-facing and front-facing polygons are culled.
    back_and_front,

}; // enum class culling_mode

} // namespace id

namespace std {
	
template <>
struct hash<id::culling_mode>
{
	size_t operator()(id::culling_mode culling_mode) const
	{ return (size_t)culling_mode; }
}; // hash 
	
} // namespace std
