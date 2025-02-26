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

namespace idlib {

/// @brief Pad a pixel buffer to the right (bottom) such that its width (height) is the least power of two greater than or equal to its old width (height).
template <typename T>
struct power_of_two_functor;

template <typename T>
auto power_of_two(const std::shared_ptr<T>& pixels) -> decltype(power_of_two_functor<T>()(pixels))
{ return power_of_two_functor<T>()(pixels); }

} // namespace idlib