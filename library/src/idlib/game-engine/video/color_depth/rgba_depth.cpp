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
