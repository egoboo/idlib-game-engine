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

/// @file idlib/game-engine/video/texture_address_mode.hpp
/// @brief An enumeration of texture address modes.
/// @author Michael Heilmann

#pragma once

namespace idlib {

/// @brief An enumeration of texture address modes.
/// Defines what happens when texture coordinates exceed 1.0.
enum class texture_address_mode
{
    /// @brief A value \f$t\f$ is clamped to \f$[0,1]\f$
    /// i.e. is set to \f$0\f$ if \f$t < 0\f$ and to \f$1\f$ if \f$t > 1\f$.
    clamp,

    /// @brief A value \f$t\f$ is clamped to \f$\left[\frac{-1}{2n},1+\frac{1}{2n}\right]\f$
    /// i.e. is set to \f$\frac{-1}{2n}\f$ if \f$t < \frac{-1}{2n}\f$ and to
    /// \f$1+\frac{1}{2n}\f$ if \f$t > 1+\frac{1}{2n}\f$. \f$n\f$ is the size of the
    /// texture in the direction of the clamping.
    clamp_to_border,

    /// @brief A value \f$t\f$ is clamped to \f$\left[\frac{1}{2n},1-\frac{1}{2n}\right]\f$
    /// i.e. is set to \f$\frac{1}{2n}\f$ if \f$t < \frac{1}{2n}\f$ and to
    /// \f$1-\frac{1}{2n}\f$ if \f$t > 1 - \frac{1}{2n}\f$. \f$n\f$ is the size of the
    /// texture in the direction of the clamping.
    clamp_to_edge,

    /// @brief A value \f$t\f$ is set to \f$\{t\}\f$
    /// i.e. the integer part is <em>ignored</em>.
    /// @remark
    /// \f$\{x\} = 1 - \lfloor x \rfloor\f$ denotes the fractional part
    /// of a real number \f$x\f$ e.g. \f$\{2.0\} = 0.0\f$,
    /// \f$\{2.9\} = 0.9\f$, ...
    repeat,

    /// @brief A value \f$t\f$ is set to \f$\{t\}\f$
    /// if \f$t\f$ is even
    /// i.e. the integer part is <em>ignored</em>
    /// (cfg Ego::TextureAddressMode::Repeat).
    /// However, if the integer part of \f$t\f$ is odd,
    /// then the \f$\f$ is set to \f$1 - \{t\}\f$.
    repeat_mirrored,

}; // enum class texture_address_mod

} // namespace idlib
