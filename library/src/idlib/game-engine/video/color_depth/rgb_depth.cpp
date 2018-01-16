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

/// @file idlib/game-engine/video/color_depth/rgb_depth.cpp
/// @brief Information on the depths of a colours and colour components
/// @author Michael Heilmann

#include "idlib/game-engine/video/color_depth/rgb_depth.hpp"

namespace id {
	
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

} // namespace Ego
