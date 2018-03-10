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

/// @file idlib/game-engine/video/video.hpp
/// @brief Idlib: Game Engine - video master include file.

#pragma once

#include "idlib/game-engine/video/blit.hpp"
#include "idlib/game-engine/video/buffer.hpp"
#include "idlib/game-engine/video/buffer_scoped_lock.hpp"
#include "idlib/game-engine/video/camera.hpp"
#include "idlib/game-engine/video/compare_function.hpp"
#include "idlib/game-engine/video/color_blend/color_blend_equation.hpp"
#include "idlib/game-engine/video/color_blend/color_blend_parameter.hpp"
#include "idlib/game-engine/video/color_depth/rgb_depth.hpp"
#include "idlib/game-engine/video/color_depth/rgba_depth.hpp"
#include "idlib/game-engine/video/culling_mode.hpp"
#include "idlib/game-engine/video/fill.hpp"
#include "idlib/game-engine/video/get_pixel.hpp"
#include "idlib/game-engine/video/image.hpp"
#include "idlib/game-engine/video/index_buffer.hpp"
#include "idlib/game-engine/video/index_descriptor.hpp"
#include "idlib/game-engine/video/index_format.hpp"
#include "idlib/game-engine/video/index_syntactics.hpp"
#include "idlib/game-engine/video/pixel_component_descriptor.hpp"
#include "idlib/game-engine/video/pixel_format.hpp"
#include "idlib/game-engine/video/primitive_type.hpp"
#include "idlib/game-engine/video/rasterization_mode.hpp"
#include "idlib/game-engine/video/set_pixel.hpp"
#include "idlib/game-engine/video/texture_address_mode.hpp"
#include "idlib/game-engine/video/texture_filter.hpp"
#include "idlib/game-engine/video/texture_sampler.hpp"
#include "idlib/game-engine/video/texture_type.hpp"
#include "idlib/game-engine/video/vertex_buffer.hpp"
#include "idlib/game-engine/video/vertex_component_descriptor.hpp"
#include "idlib/game-engine/video/vertex_component_semantics.hpp"
#include "idlib/game-engine/video/vertex_component_syntactics.hpp"
#include "idlib/game-engine/video/vertex_descriptor.hpp"
#include "idlib/game-engine/video/vertex_format.hpp"
#include "idlib/game-engine/video/video_buffer_manager.hpp"
#include "idlib/game-engine/video/viewport.hpp"
#include "idlib/game-engine/video/winding_mode.hpp"
#include "idlib/game-engine/video/window.hpp"
