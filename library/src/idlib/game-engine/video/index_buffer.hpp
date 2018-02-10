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

/// @file idlib/game-engine/video/index_buffer.hpp
/// @brief Index buffers.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/video/buffer.hpp"
#include "idlib/game-engine/video/buffer_scoped_lock.hpp"

namespace idlib {
    
/// @brief An index buffer.
class index_buffer : public buffer {
protected:
    /// @brief Construct this index buffer.
    /// @param number_of_indices the number of indices of this index buffer
    /// @param index_size the size, in Bytes, of an index of this index buffer
    index_buffer(size_t number_of_indices, size_t index_size);

public:
    /// @brief Destruct this index buffer.
    virtual ~index_buffer();
    
    /// @brief Get the number of indices of this index buffer.
    /// @return the number of indices of this index buffer
    size_t number_of_indices() const;

    /// @brief Get the size, in Bytes, of an index of this index buffer.
    /// @return the size, in Bytes, of an index of this index buffer
    size_t index_size() const;

private:
    /// @brief The number of indices.
    size_t m_number_of_indices;
	
	/// @brief The size of an index.
	size_t m_index_size;
    
}; // class index_buffer

/// @brief Provides convenient RAII-style mechanism for locking/unlocking an index buffer.
using index_buffer_scoped_lock = buffer_scoped_lock;

} // namespace idlib
