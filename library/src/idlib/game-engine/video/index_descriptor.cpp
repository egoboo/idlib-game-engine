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

/// @file idlib/game-engine/video/index_descriptor.cpp
/// @brief Descriptors of indices.
/// @author Michael Heilmann

#include "idlib/game-engine/video/index_descriptor.hpp"

namespace id {

index_descriptor::index_descriptor(index_syntactics syntactics)
    : syntactics(syntactics)
{}

index_syntactics index_descriptor::get_syntactics() const
{
    return syntactics;
}

size_t index_descriptor::get_size() const
{
    switch (syntactics)
    {
    case index_syntactics::NATURAL_16:
        return sizeof(uint16_t); // 16 / 8
    case index_syntactics::NATURAL_32:
        return sizeof(uint32_t); // 32 / 8
    default:
        throw unhandled_switch_case_error(__FILE__, __LINE__);
    }
}

bool index_descriptor::equal_to(const index_descriptor& other) const noexcept
{
    return syntactics == other.syntactics;
}

} // namespace id
