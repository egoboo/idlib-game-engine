//********************************************************************************************
//*
//*    This file is part of Egoboo.
//*
//*    Egoboo is free software: you can redistribute it and/or modify it
//*    under the terms of the GNU General Public License as published by
//*    the Free Software Foundation, either version 3 of the License, or
//*    (at your option) any later version.
//*
//*    Egoboo is distributed in the hope that it will be useful, but
//*    WITHOUT ANY WARRANTY; without even the implied warranty of
//*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//*    General Public License for more details.
//*
//*    You should have received a copy of the GNU General Public License
//*    along with Egoboo.  If not, see <http://www.gnu.org/licenses/>.
//*
//********************************************************************************************

/// @file idlib/game-engine/texture_filter.hpp
/// @brief An enumeration of texture filtering methods.
/// @author Michael Heilmann

#pragma once

namespace id {

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

} // namespace id
