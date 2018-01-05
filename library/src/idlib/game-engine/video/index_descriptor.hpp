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

/// @file idlib/game-engine/video/index_descriptor.hpp
/// @brief Descriptors of indices.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/video/index_syntactics.hpp"
#include "idlib/idlib.hpp"

namespace id {

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

} // namespace id
