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

/// @file idlib/game-engine/video/pixel_component_descriptor.hpp
/// @brief Descriptions of pixel components.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/video/pixel_component_semantics.hpp"
#include "idlib/idlib.hpp"

namespace idlib {

/// @brief Given an \f$n\f$-Bit pixel \f$P = C_0 \circ \ldots \circ C_{m-1}\f$ with
/// components \f$C_0, C_1, \ldots, C_m\f$, the pixel component descriptor denotes
/// the mask \f$M\f$ and the shift \f$S\f$ of a component \f$C_i\f$. The mask and
/// the shift allow for getting the component value by \f$C_i = (P & M ) >> S\f$.
/// The mask and the shift are given w.r.t. the host byte order.
class pixel_component_descriptor : public equal_to_expr<pixel_component_descriptor>
{
public:
    /// @brief Construct this pixel_component_descriptor object.
    /// @param semantics the semantics of the pixel component
    /// @param mask the mask of the component Bits (w.r.t. the host Byte order)
    /// @param shift the shift of the component Bits (w.r.t. the host Byte order)
    pixel_component_descriptor(pixel_component_semantics semantics, uint32_t mask, uint32_t shift);

    /// @brief Get the semantics of the pixel component.
    /// @return the semantics of the pixel component
    pixel_component_semantics get_semantics() const;

    /// @brief Get the mask for the component Bits (w.r.t. the host Byte order).
    /// @return the mask of the component Bits (w.r.t. the host Byte order)
    uint32_t get_mask() const;

    /// @brief Get the shift of the components Bits (w.r.t. host Byte order).
    /// @return the shift of the component Bits (w.r.t. the host Byte order)
    uint32_t get_shift() const;

private:
    /// @brief The semantics for the component.
    pixel_component_semantics m_semantics;

    /// @brief The mask for the component Bits.
    uint32_t m_mask;

    /// @brief The shift for the component bits.
    uint32_t m_shift;

}; // struct pixel_component_descriptor

} // namespace idlib
