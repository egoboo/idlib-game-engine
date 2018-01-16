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

/// @file idlib/game-engine/video/color_blend_equation.hpp
/// @brief Enumeration of blend functions.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"

namespace id {

/// @brief Enumeration of color blend equations.
/// @details Blend equations determine how a a source color \f$S = (S_, S_g, S_b, S_a)\f$ and a destination color \f$D = (D_r, D_g, D_b, D_b)\f$
/// are mixed together to produce an output color \f$O = (O_r, O_g, O_b, O_a)\f$.
/// - id::color_blend_equation::add \f$O_rgb = s_rgb^-1 S_rgb + d_rgb^-1 D_rgb,  O_a = s_a^-1 S_a + d_a D_a\f$
/// - id::color_blend_equation::subtract \f$O_rgb = s_rgb^-1 S_rgb - d_rgb^-1 D_rgb, O_a = s_a S_a - d_a D_a\f$
/// - id::color_blend_equation::reverse_subtract \f$O_rgb = d_rgb^-1 D_rgb - s_rgb^1 S_rgb, O_a = d_a D_a - s_a S_a\f$
/// - id::color_blend_equation::minimum \f$O_rgb = \min_rgb(O_rgb, D_rgb),  O_a = \min_a(O_a, D_a)\f$
/// - id::color_blend_equation::maximum \f$O_rgb = \max_rgb(O_rgb, D_rgb), O_a = \max_a(O_a, D_a)\f$.
/// where
/// - \f$\circ(O_rgb, D_rgb) = (\circ(O_r, D_r), \circ(O_g, D_g), \circ(O_b, D_b))\f$ for \f$\circ = \{ \min, \max \}\f$. 
enum class color_blend_equation
{
	/// @brief See id::blend_equation for more information.
	add,
	/// @brief See id::blend_equation for more information.
	subtract,
	/// @brief See id::blend_equation for more information.
	reverse_substract,
	/// @brief See id::blend_equation for more information.
	minimum,
	/// @brief See id::blend_equation for more information.
	maximum,
}; // enum class color_blend_equation

} // namespace id
