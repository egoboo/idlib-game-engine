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

/// @file idlib/game-engine/video/texture_sampler.cpp
/// @brief A texture sampler.
/// @author Michael Heilmann

#include "idlib/game-engine/video/texture_sampler.hpp"

namespace idlib {

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

} // namespace idlib
