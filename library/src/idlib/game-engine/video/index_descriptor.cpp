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
