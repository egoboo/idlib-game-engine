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

/// @file idlib/game-engine/video/rasterization_mode.hpp
/// @brief Enumeration of polygon rasterization modes.
/// @author Michael Heilmann

#pragma once

namespace idlib {

/// @brief The rasterization mode controls the interpretation of polygons for rasterization.
enum class rasterization_mode
{
    /// @brief The interior of the polygon is filled.
    solid,

    //// @brief The boundary edges of the polygon are drawn as line segments.
    line,

    /// @brief Polygon vertices that are marked as the start of a boundary edge are drawn as points.
    point,

}; // enum class rasterization_mode

} // namespace idlib
