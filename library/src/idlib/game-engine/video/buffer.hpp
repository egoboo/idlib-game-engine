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

/// @file idlib/game-engine/video/buffer.hpp
/// @brief Abstract base class of all buffers.
/// @author Michael Heilmann

#pragma once

#include "idlib/platform.hpp"

namespace idlib {

/// @brief The abstract base class of all vertex-, index-, and pixel-buffers.
class buffer
{
public:
    buffer(const buffer&) = delete;
    buffer& operator=(const buffer&) = delete;

    /// @brief Get the size, in Bytes, of this buffer.
    /// @return the size, in Bytes, of this buffer
    size_t size() const;

    /// @brief Lock this buffer.
    /// @return a pointer to the buffer data
    /// @throw idlib::lock_failed_error locking the buffer failed
    virtual void *lock() = 0;

    /// @brief Unlock this buffer.
    /// @remark If the buffer is not locked, a call to this method is a no-op.
    virtual void unlock() = 0;

protected:
    /// @brief Construct this buffer.
    /// @param size the size, in Bytes, of this buffer. @a 0 is a valid size.
    buffer(size_t size);

    /// @brief Destruct this buffer.
    virtual ~buffer();

private:
    /// @brief The size, in Bytes, of this buffer.
    size_t m_size;

}; // class buffer

} // namespace idlib
