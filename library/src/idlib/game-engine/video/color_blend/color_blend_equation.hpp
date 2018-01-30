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

/// @file idlib/game-engine/video/color_blend_equation.hpp
/// @brief Enumeration of blend functions.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"

namespace idlib {

/// @brief Enumeration of color blend equations.
/// @details Blend equations determine how a a source color \f$S = (S_, S_g, S_b, S_a)\f$ and a destination color \f$D = (D_r, D_g, D_b, D_b)\f$
/// are mixed together to produce an output color \f$O = (O_r, O_g, O_b, O_a)\f$.
/// - idlib::color_blend_equation::add \f$O_rgb = s_rgb^-1 S_rgb + d_rgb^-1 D_rgb,  O_a = s_a^-1 S_a + d_a D_a\f$
/// - idlib::color_blend_equation::subtract \f$O_rgb = s_rgb^-1 S_rgb - d_rgb^-1 D_rgb, O_a = s_a S_a - d_a D_a\f$
/// - idlib::color_blend_equation::reverse_subtract \f$O_rgb = d_rgb^-1 D_rgb - s_rgb^1 S_rgb, O_a = d_a D_a - s_a S_a\f$
/// - idlib::color_blend_equation::minimum \f$O_rgb = \min_rgb(O_rgb, D_rgb),  O_a = \min_a(O_a, D_a)\f$
/// - idlib::color_blend_equation::maximum \f$O_rgb = \max_rgb(O_rgb, D_rgb), O_a = \max_a(O_a, D_a)\f$.
/// where
/// - \f$\circ(O_rgb, D_rgb) = (\circ(O_r, D_r), \circ(O_g, D_g), \circ(O_b, D_b))\f$ for \f$\circ = \{ \min, \max \}\f$. 
enum class color_blend_equation
{
	/// @brief See idlib::blend_equation for more information.
	add,
	/// @brief See idlib::blend_equation for more information.
	subtract,
	/// @brief See idlib::blend_equation for more information.
	reverse_substract,
	/// @brief See idlib::blend_equation for more information.
	minimum,
	/// @brief See idlib::blend_equation for more information.
	maximum,
}; // enum class color_blend_equation

} // namespace idlib
