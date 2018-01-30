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

/// @file idlib/game-engine/video/primitive_type.hpp
/// @brief Enumeration of primitive types.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"

namespace idlib {

/// @brief An enumeration of primitive types.
/// @remark std::hash is implemented for idlib::primitive_type.
enum class primitive_type
{
    /// @brief A vertex \f$i\f$ defines point \f$i\f$.
    /// Given \f$n\f$ vertices, \f$n\f$ points are drawn.
    points,

    /// @brief Vertices \f$2i - 1\f$ and \f$2i\f$ define line \f$i\f$.
    /// Given \f$n\f$ vertices, \f$\frac{n}{2}\f$ lines are drawn.
    lines,

    /// @brief Vertices \f$i-1\f$ and \f$i\f$ define a line.
    /// Given \f$n\f$ vertices, \f$n-1\f$ lines are drawn.
    line_strip,

    /// @brief Vertices \f$i-1\f$ and \f$i\f$ define a line.
    /// Given \f$n\f$ vertices, \f$n-1\f$ lines are drawn
    /// plus one line between from the last vertex \f$n\f$ to the first vertex \f$1\f$.
    line_loop,

    /// @brief Vertices \f$3i-2\f$, \f$3i-1\f$, and \f$3i\f$ define triangle \f$i\f$.
    /// Given \f$n\f$ vertices, \f$\frac{n}{3}\f$ triangles are drawn.
    triangles,

    /// @brief Vertices \f$1\f$, \$i+1\f$ and \f$i+2\f$ define triangle \f$i\f$.
    /// Given \f$n\f$ vertices, \f$n-2\f$ triangles are drawn.
    triangle_fan,

    /// @brief Vertices \f$i\f$,\f$i+1\f$, and \f$i+2\f$ define triangle \f$i\f$ if \f$i\f$ is odd.
    /// For even \f$i\f$, vertices \f$i+1\f$, \f$i\f$ , and \f$i+2\f$ define triangle \f$i\f$.
    /// Given \f$n\f$ vertices, \f$n-2\f$ triangles are drawn.
    triangle_strip,

    /// @brief Vertices \f$4i-3\f$, \f$4i-2\f$, \f$4i-1\f$, and \f$4i\f$ define quadriliteral \f$i\f$.
    /// Given \f$n\f$ vertices, \f$\frac{n}{4}\f$ quadriliterals are drawn.
	/// @warning GL_QUADS is deprecated since OpenGL 3.x.
    quadriliterals,
	
    /// @brief Vertices \f$2i - 1\f$, \f$2i\f$, \f$2i + 2\f$, and \f$2i + 1\f$ define quadriliteral \f$i\f$.
    /// Given \f$n\f$ vertices, \f$\frac{n}{2}-1\f$ quadriliterals are drawn.
	/// @warning GL_QUAD_STRIP is deprecated since OpenGL 3.x.
    quadriliteral_strip,

}; // enum class primitive_type

} // namespace idlib

namespace std {
	
template <>
struct hash<idlib::primitive_type>
{
	size_t operator()(idlib::primitive_type primitive_type) const;
}; // hash 
	
} // namespace std
