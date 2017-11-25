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

/// @file idlib/game-engine/video/primitive_type.hpp
/// @brief Enumeration of primitive types.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"

namespace id {

/// @brief An enumeration of primitive types.
/// @remark std::hash is implemented for id::primitive_type.
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

} // namespace id

namespace std {
	
template <>
struct hash<id::primitive_type>
{
	size_t operator()(id::primitive_type primitive_type) const;
}; // hash 
	
} // namespace std