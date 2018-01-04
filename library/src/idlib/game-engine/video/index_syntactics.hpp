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

/// @file idlib/game-engine/index_syntactics.hpp
/// @brief Syntactic forms of indices.
/// @author Michael Heilmann

#pragma once

namespace id {

/// @brief An enum class of the syntactic forms of indices.
enum class index_syntactics {
	/// @brief Unsigned 8-Bit indices.
	NATURAL_8,
	/// @brief Unsigned 16-Bit indices.
	NATURAL_16,
	/// @brief Unsigned 32-Bit indices.
	NATURAL_32,
}; // enum class index_syntactics
	
} // namespace id
