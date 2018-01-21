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

/// @file idlib/game-engine/video/vertex_descriptor.cpp
/// @brief Descriptions of vertices.
/// @author Michael Heilmann

#include "idlib/game-engine/video/vertex_descriptor.hpp"

namespace id {

vertex_descriptor::vertex_descriptor(std::initializer_list<vertex_component_descriptor> component_descriptors)
    : m_component_descriptors(component_descriptors), m_size(0)
{
    for (const auto& component_descriptor : m_component_descriptors)
    {
        m_size = std::max(m_size, component_descriptor.get_offset() + component_descriptor.get_size());
    }
}

bool vertex_descriptor::equal_to(const vertex_descriptor& other) const
{
    if (this == &other) return true;
    if (m_size != other.m_size) return false;
    return m_component_descriptors == other.m_component_descriptors;
}

} // namespace id
