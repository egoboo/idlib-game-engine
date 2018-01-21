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
