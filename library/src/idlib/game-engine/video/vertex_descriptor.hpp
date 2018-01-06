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

/// @file idlib/game-engine/video/vertex_descriptor.hpp
/// @brief Descriptions of vertices.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/video/vertex_component_descriptor.hpp"

namespace id {

/// @brief The descriptor of a vertex.
class vertex_descriptor : public equal_to_expr<vertex_descriptor>
{
public:
    /// @brief Construct this vertex descriptor.
    /// @param component_descriptors the vertex components descriptors
    vertex_descriptor(std::initializer_list<vertex_component_descriptor> component_descriptors);

    /// @brief The type of an iterator of the vertex element descriptors.
    using const_iterator = std::vector<vertex_component_descriptor>::const_iterator;

    /// @brief The type of an iterator over the vertex element descriptors.
    using iterator = std::vector<vertex_component_descriptor>::iterator;

    /**@{*/

    /// @brief Return an iterator to the beginning.
    /// @return an iterator to the beginning
    iterator begin() { return m_component_descriptors.begin(); }
    const_iterator begin() const { return m_component_descriptors.begin(); }
    const_iterator cbegin() const { return m_component_descriptors.cbegin(); }

    /**@}*/

    /**@{*/

    /// @brief Return an iterator to the end.
    /// @return an iterator to the end
    iterator end() { return m_component_descriptors.end(); }
    const_iterator end() const { return m_component_descriptors.end(); }
    const_iterator cend() const { return m_component_descriptors.cend(); }

    /**@}*/

    /// @brief Get the size, in Bytes, of a vertex.
    /// @return the size, in Bytes, of a vertex.
    size_t get_size() const
    {
        return m_size;
    }

    // CRTP
    bool equal_to(const vertex_descriptor& other) const;

    /// @brief The list of vertex component descriptors.
    std::vector<vertex_component_descriptor> m_component_descriptors;

    /// @brief The size, in Bytes, of the vertex.
    size_t m_size;

}; // class vertex_descriptor

} // namespace id
