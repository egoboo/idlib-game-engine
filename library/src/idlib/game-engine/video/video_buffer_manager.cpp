#include "idlib/game-engine/video/video_buffer_manager.hpp"
#include "idlib/game-engine/video/opengl/video_buffer_manager.hpp"

namespace idlib {

video_buffer_manager *video_buffer_manager_create_functor::operator()() const
{ return new opengl::video_buffer_manager(); }

void video_buffer_manager_destroy_functor::operator()(video_buffer_manager *video_buffer_manager) const
{ delete video_buffer_manager; }

video_buffer_manager::video_buffer_manager()
{}

video_buffer_manager::~video_buffer_manager()
{}
	
} // namespace idlib
