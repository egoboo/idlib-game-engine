#pragma once

#include "idlib/idlib.hpp"

namespace idlib {

class index_buffer;
class vertex_buffer;

class video_buffer_manager;

/// @brief Creator functor creating the back-end.
struct video_buffer_manager_create_functor
{ video_buffer_manager *operator()() const; };

struct video_buffer_manager_destroy_functor
{ void operator()(video_buffer_manager *video_buffer_manager) const; };
	
/// @brief A video buffer manager for vertex-, index-, and pixel-buffers.
class video_buffer_manager : public singleton<video_buffer_manager, video_buffer_manager_create_functor,
                                                                    video_buffer_manager_destroy_functor>
{
protected:
    // Befriend with the destroy functor.
    friend video_buffer_manager_destroy_functor;

    /// @brief Construct this video_buffer_manager object.
    /// @remark Intentionally protected.
    video_buffer_manager();

    /// @brief Destruct this video_buffer_manager object.
    /// @remark Intentionally protected.
    virtual ~video_buffer_manager();
	
public:
	/// @brief Create an index buffer.
    /// @param number_of_indices the number of indices in the index buffer
    /// @param index_size the size, in Bytes, of an index in the index buffer
	/// @return a shared pointer to a vertex buffer
	virtual std::shared_ptr<index_buffer> create_index_buffer(size_t number_of_indices, size_t index_size) = 0;
	
	/// @brief Create a vertex buffer.
    /// @param number_of_vertices the number of vertices in the vertex buffer
    /// @param vertex_size the size, in Bytes, of a vertex in the vertex buffer
	/// @return a shared pointer to a vertex buffer
	virtual std::shared_ptr<vertex_buffer> create_vertex_buffer(size_t number_of_vertices, size_t vertex_size) = 0;

}; // class video_buffer_manager
	
} // namespace idlib
