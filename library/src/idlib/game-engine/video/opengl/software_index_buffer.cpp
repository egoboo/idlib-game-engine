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

/// @file idlib/game-engine/video/opengl/software_index_buffer.cpp
/// @brief Index buffers.
/// @author Michael Heilmann

#include "idlib/game-engine/video/opengl/software_index_buffer.hpp"

namespace idlib {

software_index_buffer::software_index_buffer(size_t number_of_indices, size_t index_size)
	: index_buffer(number_of_indices, index_size),
      m_indices(new char[number_of_indices * index_size])
{}

software_index_buffer::~software_index_buffer()
{
    delete[] m_indices;
    m_indices = nullptr;
}

void *software_index_buffer::lock()
{ return m_indices; }

void software_index_buffer::unlock()
{ /* Intentionally empty for the moment. */ }

} // namespace idlib
