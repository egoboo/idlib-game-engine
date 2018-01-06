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

/// @file idlib/game-engine/pixel_component_semantics.hpp
/// @brief Semantic forms of pixel components.
/// @author Michael Heilmann

#pragma once

namespace id {
	
/// @brief An enumeration of the semantics forms of pixel components.
enum class pixel_component_semantics
{
	/// @brief The red component.
    RED,
	/// @brief The green component.
    GREEN,
	/// @brief The blue component.
    BLUE,
	/// @brief The alpha component.
    ALPHA,
}; // enum class pixel_component_semantics

} // namespace id
