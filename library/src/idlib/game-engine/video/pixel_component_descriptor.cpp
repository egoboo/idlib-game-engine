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

/// @file idlib/game-engine/video/pixel_component_descriptor.cpp
/// @brief Descriptions of pixel components.
/// @author Michael Heilmann

#include "idlib/game-engine/video/pixel_component_descriptor.hpp"

namespace id {

pixel_component_descriptor::pixel_component_descriptor(pixel_component_semantics semantics, uint32_t mask, uint32_t shift)
    : m_semantics(semantics), m_mask(mask), m_shift(shift)
{}

pixel_component_semantics pixel_component_descriptor::get_semantics() const
{ return m_semantics; }

uint32_t pixel_component_descriptor::get_mask() const
{ return m_mask; }

uint32_t pixel_component_descriptor::get_shift() const
{ return m_shift; }

} // namespace id
