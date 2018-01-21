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
