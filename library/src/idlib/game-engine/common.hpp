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

/// @file idlib/game-engine/common.hpp
/// @brief Includes and definitions pertaining to all parts of Idlib: Game Engine.
/// @author Michael Heilmann

#pragma once

#include "idlib/math.hpp" // vectors and points
#include "idlib/color.hpp" // colors
#include "idlib/math_geometry.hpp" // axis aligned boxes

#include "idlib/game-engine/internal/header.in"

/// @brief A single precision floating point 2D vector.
using vector_2s = idlib::vector<single, 2>;

/// @brief A single precision floating point 3D vector.
using vector_3s = idlib::vector<single, 3>;

/// @brief A single precision floating point 2D point.
using point_2s = idlib::point<vector_2s>;

/// @brief A single precision floating point 3D point.
using point_3s = idlib::point<vector_3s>;

/// @brief A single precision \f$4 \times 4\f$ matrix.
using matrix_4s4s = idlib::matrix<single, 4, 4>;

/// A single-precision floating-point rectangle.
using rectangle_2s = idlib::axis_aligned_box<point_2s>;

/// A color in RGBA color space with single-precision floating-point components each within the range from 0 (inclusive) to 1 (inclusive).
/// A component value of 0 indicates minimal intensity of the component and 1 indicates maximal intensity of the component.
using color_4s = idlib::color<idlib::RGBAf>;

/// A color in RGB color space with single-precision floating-point components each within the range from 0 (inclusive) to 1 (inclusive).
/// A component value of 0 indicates minimal intensity of the component and 1 indicates maximal intensity of the component.
using color_3s = idlib::color<idlib::RGBf>;

/// A color in RGB color space with unsigned integer components each within the range from 0 (inclusive) to 255 (inclusive).
/// A component value of 0 indicates minimal intensity of the component and 255 indicates maximal intensity of the component.
using color_3b = idlib::color<idlib::RGBb>;

/// A color in RGBA color space with unsigned integer components each within the range from 0 (inclusive) to 255 (inclusive).
/// A component value of 0 indicates minimal intensity of the component and 255 indicates maximal intensity of the component.
using color_4b = idlib::color<idlib::RGBAb>;

#include "idlib/game-engine/internal/footer.in"
