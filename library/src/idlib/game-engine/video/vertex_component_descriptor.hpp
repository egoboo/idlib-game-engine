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

/// @file idlib/game-engine/video/vertex_component_descriptor.hpp
/// @brief Descriptions of vertex components.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/video/vertex_component_semantics.hpp"
#include "idlib/game-engine/video/vertex_component_syntactics.hpp"
#include "idlib/idlib.hpp"

namespace id {

/// @brief The description of a vertex component.
class vertex_component_descriptor : public equal_to_expr<vertex_component_descriptor>
{
public:
    /// @brief Construct this vertex component descriptor.
    /// @param offset the offset, in Bytes, of the vertex component from the beginning of the vertex
    /// @param syntactics the syntactics of the vertex component
    /// @param semantics the semantics of the vertex component
    vertex_component_descriptor(size_t offset, vertex_component_syntactics syntactics, vertex_component_semantics semantics);

    /// @brief Get the offset, in Bytes, of the vertex component from the beginning of the vertex.
    /// @return the offset, in Bytes, of the vertex component from the beginning of the vertex
    size_t get_offset() const;

    /// @brief Get the syntactics of the vertex component.
    /// @return the syntactics of the vertex component
    vertex_component_syntactics get_syntactics() const;

    /// @brief Get the semantics of the vertex component.
    /// @return the semantics of the vertex component
    vertex_component_semantics get_semantics() const;

    /// @brief Get the size, in Bytes, of the vertex component.
    /// @return the size, in Bytes, of the vertex component
    size_t get_size() const;

    // CRTP
    bool equal_to(const vertex_component_descriptor& other) const noexcept;

private:
    /// @brief The offset, in Bytes, of the vertex component from the beginning of the vertex.
    size_t offset;

    /// @brief The syntactics of the vertex component.
    vertex_component_syntactics syntactics;

    /// @brief The semantics of the vertex component.
    vertex_component_semantics semantics;

    /// @brief The source.
    size_t source;

}; // class vertex_component_descriptor

} // namespace id

namespace Ego {

using VertexElementDescriptor = id::vertex_component_descriptor;

} // namespace Ego
