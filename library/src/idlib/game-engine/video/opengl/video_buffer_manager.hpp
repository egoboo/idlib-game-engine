#pragma once

#include "idlib/game-engine/video/video_buffer_manager.hpp"

namespace idlib { namespace opengl {
	
class video_buffer_manager : public idlib::video_buffer_manager
{
public:
public:
    /// @brief Construct this idlib::opengl::video_buffer_manager object.
    video_buffer_manager();

    /// @brief Destruct this idlib::opengl::video_buffer_manager object.
    virtual ~video_buffer_manager();
	
	/// @copydoc idlib::video_buffer_manager::create_index_buffer
	std::shared_ptr<idlib::index_buffer> create_index_buffer(size_t number_of_indices, size_t index_size) override;
	
	/// @copydoc idlib::video_buffer_manager::create_index_buffer
	std::shared_ptr<idlib::vertex_buffer> create_vertex_buffer(size_t number_of_vertices, size_t vertex_size) override;

}; // class video_buffer_manager
	
} } // namespace idlib::opengl
