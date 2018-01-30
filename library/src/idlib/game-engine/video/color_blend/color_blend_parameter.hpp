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

/// @file idlib/game-engine/video/color_blend_equation_parameter.hpp
/// @brief Enumeration of color equation parameters.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"

namespace idlib {

/// @brief Enumeration of color blend parameters.
/// @details
/// Values of this enumeration determine how the parameters \f$s_rgb\f$, $\fs_a\f$, \f$d_rgb\f$, and \f$d_a\f$ in a color blend equation are computed.
/// </br>
/// 
/// There are two source colors \f$C_{s_0}\f$ and \f$C_{s_1}\f$ and a target color $C_t$. Furthermore, there is a constant color $C_c$.
/// Separate blend functions \f$f_rgb\f$ and \f$f_a\f$ can be specified for the RGB channel and the A channel and determine how the channels are mixed together.
/// That is, the output color \f$C\f$ is given by
/// \f[
/// C = f_rgb(C_{s_0}, C_{s_1}, C_c, C_d), f_g(C_{s_0}, C_{s_1}, C_c, C_t))
/// \f]
/// In the following table, the first column determines the blend function \f$f\f$, the second column the RGB channels of the output color \f$C\f$ when
/// when \f$f_rgb = f\f$, and the third row the A channels of the output color \f$C\f$ when \f$f_a = f\f$.
/// <table>
/// <tr><td>Parameter                                                 </td><td>\f$(C_r, C_g, C_b)\f$                     </td> <td>\f$C_a\f$\f$     </td></tr>
///
/// <tr><td>idlib::color_blend_parameter::zero                        </td><td>\f$(0,0,0)\f$                             </td> <td>\f$0\f$          </td></tr>
/// <tr><td>idlib::color_blend_parameter::one                         </td><td>\f$(1,1,1)\f$                             </td> <td>\f$1\f$          </td></tr>
///
/// <tr><td>idlib::color_blend_parameter::source0_color               </td><td>\f$(R_{s_0},G_{s_0},B_{s_0})\f$           </td> <td>\f$A_{s_0}\f$   </td></tr>
/// <tr><td>idlib::color_blend_parameter::source1_color               </td><td>\f$(R_{s_1},G_{s_1},B_{s_1})\f$           </td> <td>\f$A_{s_1}\f$   </td></tr>
///
/// <tr><td>idlib::color_blend_parameter::one_minus_source0_color     </td><td>\f$(1, 1, 1) - (R_{s_0},G_{s_0}, B_{s_0}) </td> <td>\f$1 - A_{s_0}\f$</td></tr>
/// <tr><td>idlib::color_blend_parameter::one_minus_source1_color     </td><td>\f$(1, 1, 1) - (R_{s_1},G_{s_1}, B_{s_1}) </td> <td>\f$1 - A_{s_1}\f$</td></tr>
///
/// <tr><td>idlib::color_blend_parameter::one_minus_destination_color </td><td>\f$(1, 1, 1) - (R_d, G_d, B_d)\f$         </td> <td>\f$1 - A_d\f$    </td></tr>
///
/// <tr><td>idlib::color_blend_parameter::source0_alpha               </td><td>\f$(A_{s_0}, A_{s_0}, A_{s_0})\f$         </td><td>\f$A_{s_0}\f$     </td></tr>
/// <tr><td>idlib::color_blend_parameter::source1_alpha               </td><td>\f$(A_{s_1}, A_{s_1}, A_{s_1})\f$         </td><td>\f$A_{s_1}\f$     </td></tr>
///
/// <tr><td>idlib::color_blend_parameter::one_minus_source0_alpha     </td><td>\f$(1, 1, 1) - (A_{s_0}, A_{s_0}, A_{s_0})</td><td>\f$1 - A_{s_0}\f$ </td></tr>
/// <tr><td>idlib::color_blend_parameter::one_minus_source1_alpha     </td><td>\f$(1, 1, 1) - (A_{s_1}, A_{s_1}, A_{s_1})</td><td>\f$1 - A_{s_1}\f$ </td></tr>
///
/// <tr><td>idlib::color_blend_parameter::destination_alpha           </td><td>\f$(A_d, A_d, A_d)\f$                     </td><td>\f$A_d\f$         </td></tr>
///
/// <tr><td>idlib::color_blend_parameter::one_minus_destination_alpha </td><td>\f$(1, 1, 1) - (A_d, A_d, A_d)\f$         </td><td>\f$1 - A_d\f$     </td></tr>
///
/// <tr><td>idlib::color_blend_parameter::constant_color              </td><td>\f$(R_c, G_c, B_c\f$)                     </td><td>\f$A_c\f$         </td></tr>
///
/// <tr><td>idlib::color_blend_parameter::one_minus_constant_color    </td><td>\f$(1, 1, 1) - (R_c, G_c, B_c)\f$         </td><td>\f$1 - A_c\f$     </td></tr>
///
/// <tr><td>idlib::color_blend_parameter::constant_alpha              </td><td>\f$(A_c, A_c, A_c)\f$                     </td><td>\f$A_c\f$         </td></tr>
///
/// <tr><td>idlib::color_blend_parameter::one_minus_constant_alpha    </td><td>\f$(1, 1, 1) - (A_c, A_c, A_c)\f$         </td><td>\f$1 - A_c\f$     </td></tr>
///
/// <tr><td>idlib::color_blend_parameter::source_alpha_saturate       </td><td>\f$(i, i, i)\f$                           </td><td>\f$1\f$           </td></tr>
/// </table>
/// where
/// \f{align*}{
/// i = \min\left(A_{s_0}, 1 - A_d\right)
/// \f}
///
/// <table>
/// <tr><td>idlib::blend_function::source1_alpha_saturate</td></tr>
/// <tr><td>idlib::color_blend_parameter::one_minus_source1_alpha1</td>
/// </table>
/// @remark std::hash is implemented for idlib::blend_function.
enum class color_blend_parameter
{
    /// @see idlib::color_blend_parameter
    zero,

    /// @see idlib::color_blend_parameter
    one,

    /// @see idlib::color_blend_parameter
    source0_color,

    /// @see idlib::color_blend_parameter
	source1_color,
	
    /// @see idlib::color_blend_parameter
    one_minus_source0_color,

    /// @see idlib::color_blend_parameter
	one_minus_source1_color,

    /// @see idlib::color_blend_parameter
    destination_color,

    /// @see idlib::color_blend_parameter
    one_minus_destination_color,

    /// @see idlib::color_blend_parameter
    source0_alpha,

    /// @see idlib::color_blend_parameter
	source1_alpha,
	
    /// @see idlib::color_blend_parameter
    one_minus_source0_alpha,

    /// @see idlib::color_blend_parameter
	one_minus_source1_alpha,
	
    /// @see idlib::color_blend_parameter
    destination_alpha,

    /// @see idlib::color_blend_parameter
    one_minus_destination_alpha,

    /// @see idlib::color_blend_parameter
    constant_color,

    /// @see idlib::color_blend_parameter
    one_minus_constant_color,

    /// @see idlib::color_blend_parameter
    constant_alpha,

    /// @see idlib::color_blend_parameter
    one_minus_constant_alpha,

    /// @see idlib::color_blend_parameter
    source0_alpha_saturate,

    /// @see idlib::color_blend_parameter
	source1_alpha_saturate,
	
}; // enum class color_blend_parameter

} // namespace idlib

namespace std {
	
template <>
struct hash<idlib::color_blend_parameter>
{
	size_t operator()(idlib::color_blend_parameter color_blend_parameter) const
	{ return (size_t)color_blend_parameter; }
}; // hash 
	
} // namespace std
