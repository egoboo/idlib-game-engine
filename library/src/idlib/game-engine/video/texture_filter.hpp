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

/// @file idlib/game-engine/texture_filter.hpp
/// @brief An enumeration of texture filtering methods.
/// @author Michael Heilmann

#pragma once

namespace idlib {

/// @brief An enumeration of texture filter types.
enum class texture_filter_type
{
    /// @brief The minification filter type.
    minification,

    /// @brief The MipMap filter type.
    mipmap,

    /// @brief The magnification filter type.
    magnification,

}; // enum class texture_filter_type

/// @brief An enumeration of texture filtering methods.
enum class texture_filter_method
{
    /// @brief None means, use the cheapest method available and is usually identical to "nearest"
    /// for minification and magnification filters. For mip mapping "none" means, do not use
    ///  mip maps.
    none,

    /// @brief
    /// - magnification: use the colour of the nearest texel t to the texture coordinate
    /// - minification: dito
    /// - mip maps: choose the mip map m that most closely matches the size of the pixel
    nearest,

    /// @brief
    ///  - magnification: use the weighted average of the four texels t0, t1, t2, t3 that
    ///                   are closest to the specified texture coordinate
    ///  - minification:  dito
    ///  - mip maps:      select the two mip maps m0 and m1 that most closely match the size of the pixel
    ///                   If the minification filter is "nearest"/"linear" then one texel t0 from m0 and
    ///                   one texel t1 from mip map m1 is selected each by the "nearest"/"linear" criterion.
    ///                   The weighted average of t0 and t1 is used to produce the pixel.
    linear,

}; // enum class texture_filter_method

} // namespace idlib
