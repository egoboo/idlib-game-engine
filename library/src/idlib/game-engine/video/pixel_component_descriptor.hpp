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

/// @file idlib/game-engine/video/pixel_component_descriptor.hpp
/// @brief Descriptions of pixel components.
/// @author Michael Heilmann

#pragma once

#include "idlib/idlib.hpp"

namespace id {

/// @brief Given an \f$n\f$-Bit pixel \f$P = C_0 \circ \ldots \circ C_{m-1}\f$ with
/// components \f$C_0, C_1, \ldots, C_m\f$, the pixel component descriptor denotes
/// the mask \f$M\f$ and the shift \f$S\f$ of a component \f$C_i\f$. The mask and
/// the shift allow for getting the component value by \f$C_i = (P & M ) >> S\f$.
/// The mask and the shift are given w.r.t. the host byte order.
class pixel_component_descriptor
{
public:
    /// @brief Construct this pixel_component_descriptor object.
    /// @param mask the mask of the component Bits (w.r.t. the host Byte order)
    /// @param shift the shift of the component Bits (w.r.t. the host Byte order)
    pixel_component_descriptor(uint32_t mask, uint32_t shift);

    /// @brief Get the mask for the component Bits (w.r.t. the host Byte order).
    /// @return the mask of the component Bits (w.r.t. the host Byte order)
    uint32_t get_mask() const;

    /// @brief Get the shift of the components Bits (w.r.t. host Byte order).
    /// @return the shift of the component Bits (w.r.t. the host Byte order)
    uint32_t get_shift() const;

private:
    /// @brief The mask for the component Bits.
    uint32_t m_mask;

    /// @brief The shift for the component bits.
    uint32_t m_shift;
}; // struct pixel_component_descriptor

} // namespace id
