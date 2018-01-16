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

/// @file idlib/game-engine/video/texture_sampler.cpp
/// @brief A texture sampler.
/// @author Michael Heilmann

#include "idlib/game-engine/video/texture_sampler.hpp"

namespace id {

texture_sampler::texture_sampler(texture_filter_method min_filter_method,
                                 texture_filter_method mag_filter_method,
                                 texture_filter_method mip_filter_method,
		                         texture_address_mode address_mode_s,
                                 texture_address_mode address_mode_t,
                                 float anisotropy_levels)
    :  m_min_filter_method(min_filter_method),
       m_mag_filter_method(mag_filter_method),
       m_mip_filter_method(mip_filter_method),
	   m_address_mode_s(address_mode_s),
       m_address_mode_t(address_mode_t),
       m_anisotropy_levels(anisotropy_levels)
{}

texture_filter_method texture_sampler::min_filter_method() const
{ return m_min_filter_method; }

void texture_sampler::min_filter_method(texture_filter_method min_filter_method)
{ m_min_filter_method = min_filter_method; }

texture_filter_method texture_sampler::mag_filter_method() const
{ return m_mag_filter_method; }

void texture_sampler::mag_filter_method(texture_filter_method mag_filter_method)
{ m_mag_filter_method = mag_filter_method; }

texture_filter_method texture_sampler::mip_filter_method() const
{ return m_mip_filter_method; }

void texture_sampler::mip_filter_method(texture_filter_method mip_filter_method)
{ m_mip_filter_method = mip_filter_method; }

texture_address_mode texture_sampler::address_mode_s() const
{ return m_address_mode_s; }

void texture_sampler::address_mode_s(texture_address_mode address_mode_s)
{ m_address_mode_s = address_mode_s; }

texture_address_mode texture_sampler::address_mode_t() const
{ return m_address_mode_t; }

void texture_sampler::address_mode_t(texture_address_mode address_mode_t)
{ m_address_mode_t = address_mode_t; }

float texture_sampler::anisotropy_levels() const
{ return m_anisotropy_levels; }

void texture_sampler::anisotropy_levels(float anisotropy_levels)
{ m_anisotropy_levels = anisotropy_levels; }

} // namespace id
