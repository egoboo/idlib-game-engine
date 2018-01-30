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

/// @file idlib/game-engine/video/index_descriptor.hpp
/// @brief Descriptors of indices.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/video/index_syntactics.hpp"
#include "idlib/idlib.hpp"

namespace idlib {

/// @brief The descriptor of an index.
class index_descriptor : public equal_to_expr<index_descriptor>
{
public:
    /// @brief Construct this index descriptor.
    /// @param syntax the syntactics of the index
    index_descriptor(index_syntactics syntactics);

    /// @brief Get the syntactics of the index.
    /// @return the syntactics of the index.
    index_syntactics get_syntactics() const;

    /// @brief Get the size, in Bytes, of the index.
    /// @return the size, in Bytes, of the index
    size_t get_size() const;

    // CRTP
    bool equal_to(const index_descriptor& other) const noexcept;

private:
    /// @brief The syntactics of the index.
    index_syntactics syntactics;

}; // class index_descriptor

} // namespace idlib
