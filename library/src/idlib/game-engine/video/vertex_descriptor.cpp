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
