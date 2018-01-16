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

/// @file idlib/game-engine/video/rgb_depth.hpp
/// @brief Information on the depths of a colors and color components
/// The "depth" of a color/color component is the number of bits used to represent a color/color component value.
/// @author Michael Heilmann

#pragma once

#include "idlib/crtp.hpp"
#include <cstdint>

namespace id {

/// @brief The depth of an RGB color.
struct rgb_depth : public equal_to_expr<rgb_depth>
{
	/// @brief Construct this rgba_depth object.
	/// @param r, g, b the R, G, and B depths
	rgb_depth(uint8_t r, uint8_t g, uint8_t b) noexcept;
					 
	// CRTP
    bool equal_to(const rgb_depth& other) const noexcept;

	/// @brief Get the sum of the red, green, and blue depths.
	/// @return the depth
	uint16_t depth() const noexcept;

	/// @brief Get the R depth.
	/// @return the R depth
	uint8_t r() const noexcept;

	/// @brief Set the R depth.
	/// @param r the R depth
	void r(uint8_t r) noexcept;
	
	/// @brief Get the G depth.
	/// @return the G depth
	uint8_t g() const noexcept;
	
	/// @brief Set the G depth.
	/// @param g the G depth
	void g(uint8_t g) noexcept;

	/// @brief Get the B depth.
	/// @return the B depth
	uint8_t b() const noexcept;
	
	/// @brief Set the B depth.
	/// @param b the B depth
	void b(uint8_t b) noexcept;
	
private:
	/// @brief The R depth.
	uint8_t m_r;
	
	/// @brief The G depth.
	uint8_t m_g;
	
	/// @brief The B depth.
	uint8_t m_b;
	
}; // struct rgb_depth

} // namespace id
