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

/// @file idlib/game-engine/video/vertex_descriptor.hpp
/// @brief Descriptions of vertices.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/video/vertex_component_descriptor.hpp"

namespace idlib {

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

} // namespace idlib
