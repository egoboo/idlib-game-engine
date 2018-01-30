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

/// @file idlib/game-engine/video/rgb_depth.hpp
/// @brief Information on the depths of a colors and color components
/// The "depth" of a color/color component is the number of bits used to represent a color/color component value.
/// @author Michael Heilmann

#pragma once

#include "idlib/crtp.hpp"
#include <cstdint>

namespace idlib {

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

} // namespace idlib
