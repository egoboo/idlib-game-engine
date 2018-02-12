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

#pragma once

#include <string>

#include "idlib/game-engine.hpp"

template <typename T>
struct new_functor
{
	template <typename ... Arguments>
	T *operator()(Arguments&& ... arguments) const
	{ return new T(std::forward<Arguments>(arguments) ...); }
};

template <typename T>
struct delete_functor
{
	void operator()(T *p) const
	{ delete p; }
};

struct library
{
	void info(const std::string& msg);

	void warning(const std::string& msg);

	void error(const std::string& msg);
	
private:
	std::string sanitize(const std::string& msg);
};

struct sdl_library;

/// The SDL library as a singleton.
struct sdl_library : idlib::singleton<sdl_library, new_functor<sdl_library>, delete_functor<sdl_library>>,
                     library
{
protected:
	friend struct new_functor<sdl_library>;
	friend struct delete_functor<sdl_library>;
	sdl_library();
	~sdl_library();
};

struct sdl_image_library;

struct sdl_image_library : idlib::singleton<sdl_image_library, new_functor<sdl_image_library>, delete_functor<sdl_image_library>>,
                           library
{
protected:
	friend struct new_functor<sdl_image_library>;
	friend struct delete_functor<sdl_image_library>;
	sdl_image_library();
	~sdl_image_library();
};

struct sdl_ttf_library;

struct sdl_ttf_library : idlib::singleton<sdl_ttf_library, new_functor<sdl_ttf_library>, delete_functor<sdl_ttf_library>>,
                         library
{
protected:
	friend struct new_functor<sdl_ttf_library>;
	friend struct delete_functor<sdl_ttf_library>;
    sdl_ttf_library();
    ~sdl_ttf_library();
};

struct sdl_mixer_library;

struct sdl_mixer_library : idlib::singleton<sdl_mixer_library, new_functor<sdl_mixer_library>, delete_functor<sdl_mixer_library>>,
                           library
{
protected:
	friend struct new_functor<sdl_mixer_library>;
	friend struct delete_functor<sdl_mixer_library>;
	sdl_mixer_library();
	~sdl_mixer_library();
};

struct physfs_library;

struct physfs_library : idlib::singleton<physfs_library, new_functor<physfs_library>, delete_functor<physfs_library>>,
                        library
{
protected:
	friend struct new_functor<physfs_library>;
	friend struct delete_functor<physfs_library>;
    physfs_library(const std::string& argv0);
    ~physfs_library();
};
