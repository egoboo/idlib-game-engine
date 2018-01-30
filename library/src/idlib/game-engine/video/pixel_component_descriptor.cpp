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

/// @file idlib/game-engine/video/pixel_component_descriptor.cpp
/// @brief Descriptions of pixel components.
/// @author Michael Heilmann

#include "idlib/game-engine/video/pixel_component_descriptor.hpp"

namespace idlib {

pixel_component_descriptor::pixel_component_descriptor(pixel_component_semantics semantics, uint32_t mask, uint32_t shift)
    : m_semantics(semantics), m_mask(mask), m_shift(shift)
{}

pixel_component_semantics pixel_component_descriptor::get_semantics() const
{ return m_semantics; }

uint32_t pixel_component_descriptor::get_mask() const
{ return m_mask; }

uint32_t pixel_component_descriptor::get_shift() const
{ return m_shift; }

} // namespace idlib
