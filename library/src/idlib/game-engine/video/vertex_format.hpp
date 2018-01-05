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

/// @file idlib/game-engine/vertex_format.hpp
/// @brief Enumeration of vertex formats.
/// @author Michael Heilmann

#pragma once

namespace id {

/// @brief Enumeration of canonical identifiers for vertex formats.
enum class vertex_format {
    /// @brief
    /// Two floats for the position component.
    P2F,

	/// @brief
	/// Two floats for the position component,
	/// two floats for the texture component.
	P2FT2F,

    /// @brief
    /// Three floats for the position component.
    P3F,

    /// @brief
    /// Three floats for the position component and
    /// four floats for colour component.
    P3FC4F,

    /// @brief
    /// Three floats for the position component and
    /// two floats for the texture component.
    P3FT2F,

    /// @brief
    /// Three floats for the position component,
    /// four floats for the colour component, and
    /// three floats for the normal component.
    P3FC4FN3F,

    /// @brief
    /// Three floats for the position component,
    /// four floats for the colour component, and
    /// two floats for the texture component.
    P3FC4FT2F,

    /// @brief
    /// Three floats for the position component,
    /// four floats for the colour component,
    /// two floats for the texture component, and
    /// three floats for the normal component.
    P3FC4FT2FN3F,

    /// @brief
    /// Three floats for the position component,
    /// three floats for the colour component, and
    /// two floats for the texture component.
    P3FC3FT2F,

}; // enum class vertex_format	

} // namespace id
