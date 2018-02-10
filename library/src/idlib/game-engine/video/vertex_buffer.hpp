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

/// @file idlib/game-engine/video/vertex_buffer.hpp
/// @brief Vertex buffers.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/video/buffer.hpp"
#include "idlib/game-engine/video/buffer_scoped_lock.hpp"

namespace idlib {

/// @brief A vertex buffer.
class vertex_buffer : public buffer {
protected:
    /// @brief Construct this vertex buffer.
    /// @param number_of_vertices the number of vertices of this vertex buffer
    /// @param vertex_size the size, in Bytes, of a vertex of this vertex buffer
    vertex_buffer(size_t number_of_vertices, size_t vertex_size);

public:
    /// @brief Destruct this vertex buffer.
    virtual ~vertex_buffer();

    /// @brief Get the number of vertices of this vertex buffer.
    /// @return the number of vertices of this vertex buffer
    size_t number_of_vertices() const;

    /// @brief Get the size, in Bytes, of a vertex of this vertex buffer.
    /// @return the size, in Bytes, of a vertex of this vertex buffer
    size_t vertex_size() const;
	
private:
    /// @brief The number of vertices.
    size_t m_number_of_vertices;

    /// @brief The size, in Bytes, of a vertex.
    size_t m_vertex_size;

}; // class vertex_buffer

/// @brief Provides convenient RAII-style mechanism for locking/unlocking a vertex buffer.
using vertex_buffer_scoped_lock = buffer_scoped_lock;

} // namespace idlib
