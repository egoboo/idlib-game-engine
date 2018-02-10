#pragma once

#include "idlib/game-engine/video/buffer.hpp"

namespace idlib {

/// @brief Provides convenient RAII-style mechanism for locking/unlocking a buffers.
class buffer_scoped_lock
{
public:
    /// @brief Construct this buffer scoped lock, locking the buffer.
    /// @param buffer the buffer
    /// @throw idlib::lock_failed_error the buffer can not be locked
    buffer_scoped_lock(buffer& buffer)
        : m_buffer(&buffer),
		  m_pointer(buffer.lock())
	{}

    /// @brief Destruct his buffer scoped lock, unlocking the buffer.
    ~buffer_scoped_lock()
	{
        m_buffer->unlock();
    }

    /// @brief Get a pointer to the backing memory of the buffer.
    /// @return a pointer to the backing memory of the buffer of type @a (T *)
	/// @tparam T the type 
    template <typename T>
    T *get()
	{ return static_cast<T *>(m_pointer); }
	
private:
    /// @brief A pointer to the backing memory of the buffer.
    void *m_pointer;

    /// @brief A pointer to the buffer.
    buffer *m_buffer;

}; // struct buffer_scoped_lock
	
} // namespace idlib
