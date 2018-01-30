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

/// @file idlib/game-engine/video/color_depth/rgb_depth.cpp
/// @brief Information on the depths of a colours and colour components
/// @author Michael Heilmann

#include "idlib/game-engine/video/color_depth/rgb_depth.hpp"

namespace idlib {
	
rgb_depth::rgb_depth(uint8_t r, uint8_t g, uint8_t b) noexcept
	: m_r(r),
	  m_g(g),
	  m_b(b)
{}

bool rgb_depth::equal_to(const rgb_depth& other) const noexcept
{
	return r() == other.r()
		&& g() == other.g()
		&& b() == other.b();
}

uint16_t rgb_depth::depth() const noexcept
{ return r() + g() + b(); }

uint8_t rgb_depth::r() const noexcept
{ return m_r; }

void rgb_depth::r(uint8_t r) noexcept
{ m_r = r; }

uint8_t rgb_depth::g() const noexcept
{ return m_g; }

void rgb_depth::g(uint8_t g) noexcept
{ m_g = g; }

uint8_t rgb_depth::b() const noexcept
{ return m_b; }

void rgb_depth::b(uint8_t b) noexcept
{ m_b = b; }

} // namespace idlib
