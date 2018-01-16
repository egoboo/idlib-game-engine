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

/// @file idlib/game-engine/video/rgba_depth.hpp
/// @brief Information on depths of RGBA colors
/// The "depth" of a color/color component is the number of bits used to represent a color/color component value.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/video/color_depth/rgb_depth.hpp"

namespace id {

/// @brief The depth of an RGBA color.
struct rgba_depth : public equal_to_expr<rgba_depth>
{
	/// @brief Construct this rgba_color_depth object.
	/// @param rgb_depth the RGB color depth,
	/// @param a_depth the A depth
	rgba_depth(const rgb_depth& rgb_depth, uint8_t a_depth) noexcept;

	// CRTP
    bool equal_to(const rgba_depth& other) const noexcept;

	/// @brief Get the sum of the depths.
	/// @return the sum of the depth
	uint16_t depth() const noexcept;

	/// @brief Get the RGB depth.
	/// @return the RGB depth
	const rgb_depth& rgb() const noexcept;

	/// @brief Set the RGB depth.
	/// @param rgb the RGB depth
	void rgb(const rgb_depth& rgb) noexcept;

	/// @brief Get the A depth.
	/// @return the A depth
	uint8_t a() const noexcept;
	
	/// @brief Set the A depth.
	/// @param a the A depth
	void a(uint8_t a) noexcept;

private:
	/// @brief The RGB depth.
	rgb_depth m_rgb;

	/// @brief The A depth.
	uint8_t m_a;
	
}; // struct rgba_color_depth

} // namespace id
