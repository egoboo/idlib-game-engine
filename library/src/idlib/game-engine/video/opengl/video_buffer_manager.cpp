#include "idlib/game-engine/video/opengl/video_buffer_manager.hpp"

#include "idlib/game-engine/video/opengl/software_index_buffer.hpp"
#include "idlib/game-engine/video/opengl/software_vertex_buffer.hpp"

namespace idlib::opengl {

video_buffer_manager::video_buffer_manager()
{}

video_buffer_manager::~video_buffer_manager()
{}

std::shared_ptr<idlib::index_buffer> video_buffer_manager::create_index_buffer(size_t number_of_indices, size_t index_size)
{
	return std::make_shared<software_index_buffer>(number_of_indices, index_size);
}
	
std::shared_ptr<idlib::vertex_buffer> video_buffer_manager::create_vertex_buffer(size_t number_of_vertices, size_t vertex_size)
{
	return std::make_shared<software_vertex_buffer>(number_of_vertices, vertex_size);
}

} // namespace idlib::opengl
