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

/// @file idlib/game-engine/vertex_format.hpp
/// @brief Enumeration of vertex formats.
/// @author Michael Heilmann

#pragma once

namespace idlib {

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

} // namespace idlib
