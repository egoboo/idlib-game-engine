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
