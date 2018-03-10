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
struct blit_functor;

template <typename T>
void blit(T *source_pixels, T *target_pixels)
{ blit_functor<T>()(source_pixels, target_pixels); }

template <typename T>
void blit(T *source_pixels, const rectangle_2s& source_rectangle, T *target_pixels)
{ blit_functor<T>()(source_pixels, source_rectangle, target_pixels); }

template <typename T>
void blit(T *source_pixels, T *target_pixels, const point_2s& target_point)
{ blit_functor<T>()(source_pixels, target_pixels, target_point); }

template <typename T>
void blit(T *source_pixels, const rectangle_2s& source_rectangle, T *target_pixels, const point_2s& target_point)
{ blit_functor<T>()(source_pixels, source_rectangle, target_pixels, target_point); }

} // namespace idlib
