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

/// @file idlib/game-engine/video/vertex_component_descriptor.cpp
/// @brief Descriptions of vertex elements.
/// @author Michael Heilmann

#include "idlib/game-engine/video/vertex_component_descriptor.hpp"

namespace id {

vertex_component_descriptor::vertex_component_descriptor(size_t offset, vertex_component_syntactics syntactics, vertex_component_semantics semantics)
    : offset(offset), syntactics(syntactics), semantics(semantics)
{}

bool vertex_component_descriptor::equal_to(const vertex_component_descriptor& other) const noexcept
{
    return offset == other.offset
        && syntactics == other.syntactics
        && semantics == other.semantics;
}

size_t vertex_component_descriptor::get_offset() const
{
    return offset;
}

vertex_component_syntactics vertex_component_descriptor::get_syntactics() const
{
    return syntactics;
}

vertex_component_semantics vertex_component_descriptor::get_semantics() const
{
    return semantics;
}

size_t vertex_component_descriptor::get_size() const
{
    switch (syntactics)
    {
    case vertex_component_syntactics::SINGLE_1:
        return sizeof(float) * 1;
    case vertex_component_syntactics::SINGLE_2:
        return sizeof(float) * 2;
    case vertex_component_syntactics::SINGLE_3:
        return sizeof(float) * 3;
    case vertex_component_syntactics::SINGLE_4:
        return sizeof(float) * 4;
    default:
        throw unhandled_switch_case_error(__FILE__, __LINE__);
    }
}

} // namespace id
