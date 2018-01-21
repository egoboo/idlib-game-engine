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

/// @file idlib/game-engine/video/color_depth/rgba_depth.hpp
/// @brief Information on the depths of a colours and colour components
/// @author Michael Heilmann

#include "idlib/game-engine/video/color_depth/rgba_depth.hpp"

namespace id {

rgba_depth::rgba_depth(const rgb_depth& rgb, uint8_t a) noexcept
	: m_rgb(rgb), m_a(a)
{}

bool rgba_depth::equal_to(const rgba_depth& other) const noexcept
{
	return m_rgb == other.rgb()
	    && a() == other.a();
}

uint16_t rgba_depth::depth() const noexcept
{ return m_rgb.depth() + a(); }

const rgb_depth& rgba_depth::rgb() const noexcept
{ return m_rgb; }

void rgba_depth::rgb(const rgb_depth& rgb) noexcept
{ m_rgb = rgb; }

uint8_t rgba_depth::a() const noexcept
{ return m_a; }

void rgba_depth::a(uint8_t a) noexcept
{ m_a = a; }

} // namespace id
