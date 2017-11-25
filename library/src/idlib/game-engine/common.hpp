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

/// @file idlib/game-engine/common.hpp
/// @brief Includes and definitions pertaining to all parts of Idlib: Game Engine.
/// @author Michael Heilmann

#pragma once

#include "idlib/idlib.hpp"

#include "idlib/game-engine/internal/header.in"

/// @brief A single precision floating point 2D point.
using point_2s = id::point<id::vector<single, 2>>;

/// @brief A single precision floating point 2D vector.
using vector_2s = id::vector<single, 2>;
	
#include "idlib/game-engine/internal/footer.in"
