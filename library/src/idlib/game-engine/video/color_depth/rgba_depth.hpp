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

/// @file idlib/game-engine/video/rgba_depth.hpp
/// @brief Information on depths of RGBA colors
/// The "depth" of a color/color component is the number of bits used to represent a color/color component value.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/video/color_depth/rgb_depth.hpp"

namespace idlib {

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

} // namespace idlib
