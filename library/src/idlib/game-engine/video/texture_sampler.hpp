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

/// @file idlib/game-engine/video/texture_sampler.hpp
/// @brief A texture sampler.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/video/texture_filter.hpp"
#include "idlib/game-engine/video/texture_address_mode.hpp"

namespace id {

/// @brief A texture sampler is part of the state of a texture (Ego::Texture).
class texture_sampler
{
public:
    /// @brief Construct this texture sampler.
    /// @param minFilter the minification filter
    /// @param magFilter the magnification filter
    /// @param mipMapFilter the mipmap filter
    /// @param addressModeS the address mode for the s-axis
    /// @param addressModeT the address mode for the t-axis
    /// @param anisotropyLevels the levels of anisotropic filtering
    /// When the sampler is applied, this value is clamped to \f$[min,max]\f$ where
    /// \f$min\f$ is the minimum level and \f$max\f$ is the maximum level of anistropic filtering supported.
    /// The minimum level means anisotropic filtering is off i.e. isotropic filtering is performed.
    texture_sampler(texture_filter_method minFilter, texture_filter_method magFilter, texture_filter_method mipMapFilter,
                    texture_address_mode addressModeS, texture_address_mode addressModeT,
                    float anisotropyLevels);

    /// @brief Get the minification filter method.
    /// @return the minification filter method
    texture_filter_method min_filter_method() const;

    /// @brief Set the minification filter method.
    /// @param min_filter_method the minification filter method
    void min_filter_method(texture_filter_method min_filter_method);

    /// @brief Get the magnification filter method.
    /// @return the magnification filter method
    texture_filter_method mag_filter_method() const;

    /// @brief Set the magnification filter method.
    /// @param mag_filter_method the magnification filter method
    void mag_filter_method(texture_filter_method mag_filter_method);

    /// @brief Get the mip filter method.
    /// @return the mip filter method
    texture_filter_method mip_filter_method() const;

    /// @brief Set the mip filter method.
    /// @param mip_filter_method the mip filter method
    void mip_filter_method(texture_filter_method mip_filter_method);

    /// @brief Get the address mode for the s-axis.
    /// @return the address mode for the s-axis
    texture_address_mode address_mode_s() const;

    /// @brief Set the address mode for the s-axis.
    /// @param address_mode_s the address mode for the s-axis
    void address_mode_s(texture_address_mode address_mode_s);

    /// @brief Get the address mode for the t-axis.
    /// @return the address mode for the t-axis
    texture_address_mode address_mode_t() const;

    /// @brief Set the address mode for the t-axis.
    /// @param address_mode_t the address mode for the t-axis
    void address_mode_t(texture_address_mode address_mode_t);

    /// @brief Get the levels of anistropic filtering.
    /// @return the levels of anisotropic filtering
    float anisotropy_levels() const;

    /// @brief Set the levels of anisotropic filtering.
    /// @param anisotropy_levels the levels of anisotropic filtering
    void anisotropy_levels(float anisotropy_levels);

private:
    /// @brief The minification filter.
    texture_filter_method m_min_filter_method;

    /// @brief The magnification filter method.
    texture_filter_method m_mag_filter_method;

    /// @brief The mip filter method.
    texture_filter_method m_mip_filter_method;

    /// @brief The addressing mode along the s-axis.
    texture_address_mode m_address_mode_s;

    /// @brief The addressing mode along the t-axis.
    texture_address_mode m_address_mode_t;

    /// @brief The levels of anistropic filtering.
    float m_anisotropy_levels;

}; // class texture_sampler

} // namespace ego
