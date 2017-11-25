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

/// @file idlib/game-engine/blend_function.hpp
/// @brief Enumeration of blend functions.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"

namespace id {

/// @brief Blend functions.
/// @details
/// "blending" determines how two input colors are mixed together to produce an output color.
/// That is, blending is a function \f$B : RGBA x RGBA \rightarrow RGBA\f$.
/// The blend function is parameterized by four parameters and a blend color.
/// These four parameters determine how the RGB components and the A components of the input colors are scaled before they are passed into the blend function
/// The table below denotes the parameter value (the first column) and the effect when being assigned to the parameter pertaining to the RGB and A parameter (of either the first or second input color). 
/// The first input color - called the source color - is denoted by \f$\left(R_{s_0}, G_{s_0}, B_{s_0}, A_{s_0}\right)\f$ and
/// the second input color - called the destination color - is denoted by \f$\left(R_{d}, G_{d}, B_{d}, A_{d}\right)\f$.
/// The constant blend color is denoted by \f$\left(R_c, G_c, B_c, A_c\right)\f$.
/// <table>
/// <tr><td>Parameter                                       </td><td>RGB                                       </td> <td>A                </td></tr>
///
/// <tr><td>id::blend_function::zero                        </td><td>\f$(0,0,0)\f$                             </td> <td>\f$0\f$          </td></tr>
/// <tr><td>id::blend_function::one                         </td><td>\f$(1,1,1)\f$                             </td> <td>\f$1\f$          </td></tr>
///
/// <tr><td>id::blend_function::source_color                </td><td>\f$(R_{s_0},G_{s_0},B_{s_0})\f$           </td> <td>\f$A_{s_0}\f$    </td></tr>
/// <tr><td>id::blend_function::one_minus_source_color      </td><td>\f$(1, 1, 1) - (R_{s_0},G_{s_0}, B_{s_0}) </td> <td>\f$1 - A_{s_0}\f$</td></tr>
///
/// <tr><td>id::blend_function::source_color                </td><td>\f$(R_{s_1}, G_{s_1}, B_{s_1})\f$         </td> <td>\f$A_d\f$        </td></tr>
/// <tr><td>id::blend_function::one_minus_destination_color </td><td>\f$(1, 1, 1) - (R_d, G_d, B_d)\f$         </td> <td>\f$1 - A_d\f$    </td></tr>
///
/// <tr><td>id::blend_function::source_alpha                </td><td>\f$(A_{s_0}, A_{s_0}, A_{s_0})\f$         </td><td>\f$A_{s_0}\f$     </td></tr>
/// <tr><td>id::blend_function::one_minus_source_alpha      </td><td>\f$(1, 1, 1) - (A_{s_0}, A_{s_0}, A_{s_0})</td><td>\f$1 - A_{s_0}\f$ </td></tr>
// /
/// <tr><td>id::blend_function::destination_alpha           </td><td>\f$(A_d, A_d, A_d)\f$                     </td><td>\f$A_d\f$         </td></tr>
/// <tr><td>id::blend_function::one_minus_destination_alpha </td><td>\f$(1, 1, 1) - (A_d, A_d, A_d)\f$         </td><td>\f$1 - A_d\f$     </td></tr>
///
/// <tr><td>id::blend_function::constant_color              </td><td>\f$(R_c, G_c, B_c\f$)                     </td><td>\f$A_c\f$         </td></tr>
/// <tr><td>id::blend_function::one_minus_constant_color    </td><td>\f$(1, 1, 1) - (R_c, G_c, B_c)\f$         </td><td>\f$1 - A_c\f$     </td></tr>
///
/// <tr><td>id::blend_function::constant_alpha              </td><td>\f$(A_c, A_c, A_c)\f$                     </td><td>\f$A_c\f$         </td></tr>
/// <tr><td>id::blend_function::one_minus_constant_alpha    </td><td>\f$(1, 1, 1) - (A_c, A_c, A_c)\f$         </td><td>\f$1 - A_c\f$     </td></tr>
///
/// <tr><td>id::blend_function::source_alpha_saturate       </td><td>\f$(i, i, i)\f$                           </td><td>\f$1\f$           </td></tr>
/// </table>
/// where
/// \f{align*}{
/// i = \min\left(A_{s_0}, 1 - A_d\right)
/// \f}
/// @remark std::hash is implemented for id::blend_function.
enum class blend_function
{
    /// @see id::blend_function
    zero,

    /// @see id::blend_function
    one,

    /// @see id::blend_function
    source_color,

    /// @see id::blend_function
    one_minus_source_color,

    /// @see id::blend_function
    destination_color,

    /// @see id::blend_function
    one_minus_destination_color,

    /// @see id::blend_function
    source_alpha,

    /// @see id::blend_function
    one_minus_source_alpha,

    /// @see id::blend_function
    destination_alpha,

    /// @see id::blend_function
    one_minus_destination_alpha,

    /// @see id::blend_function
    constant_color,

    /// @see id::blend_function
    one_minus_constant_color,

    /// @see id::blend_function
    constant_alpha,

    /// @see id::blend_function
    one_minus_constant_alpha,

    /// @see id::blend_function
    source_alpha_saturate,

}; // enum class blend_function

} // namespace id

namespace std {
	
template <>
struct hash<id::blend_function>
{
	size_t operator()(id::blend_function blend_function) const;
}; // hash 
	
} // namespace std
