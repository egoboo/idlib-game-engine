// Copyright Michael Heilmann 2016, 2017.
//
// This file is part of Idlib: Game Engine.
//
// Idlib: Game Engine is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Idlib: Game Engine is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Idlib: Game Engine. If not, see <http://www.gnu.org/licenses/>.

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
