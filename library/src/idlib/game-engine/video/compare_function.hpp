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

/// @file idlib/game-engine/video/compare_function.hpp
/// @brief Enumeration of compare functions used for depth/stencil buffer operations and others.
/// @author Michael Heilmann

#pragma once

namespace id {

/// @brief Compare functions used for the depth/stencil buffer operations and others.
enum class compare_function
{
    /// @brief Always reject.
    always_fail,

    /// @brief Always pass.
    always_pass,

    /// @brief Pass if less.
    less,

    /// @brief Pass if less or equal.
    less_or_equal,

    /// @brief Pass if equal.
    equal,

    /// @brief Pass if not equal.
    not_equal,

    /// @brief Pass if greater or equal.
    greater_or_equal,

    /// @brief Pass if greater.
    greater,

}; // enum class compare_function

} // namespace id
