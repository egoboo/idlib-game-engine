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

#pragma once

#include "idlib/game-engine/common.hpp"

namespace idlib {

template <typename T>
struct fill_functor;

/// @{
/// @brief Fill pixels with colors.
/// @param pixels a pointer to the pixels
/// @param color the fill color

template <typename T>
void fill(T *pixels, const color_3b& color)
{ fill_functor<T>()(pixels, color); }

template <typename T>
void fill(T *pixels, const color_4b& color)
{ fill_functor<T>()(pixels, color); }

/// @}

/// @{
/// @brief Fill pixels with colors.
/// @param pixels a pointer to the pixels
/// @param color the fill color
/// @param rectangle the rectangle of the pixels to fill. The specified rectangle is clipped against the rectangle of the pixels.

template <typename T>
void fill(T *pixels, const color_3b& color, const rectangle_2s& rectangle)
{ fill_functor<T>()(pixels, color, rectangle); }

template <typename T>
void fill(T *pixels, const color_4b& color, const idlib::rectangle_2s& rectangle)
{ fill_functor<T>()(pixels, color, rectangle); }

/// @}

} // namespace idlib
