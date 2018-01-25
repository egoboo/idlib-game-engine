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

#include <cstdlib>
#include <string>
#include <iostream>

#include "idlib/game-engine.hpp"

#include <SDL.h>
#undef main

#include <SDL_image.h>

#include <SDL_mixer.h>

#include <SDL_ttf.h>

#include <SDL_events.h>

#include <physfs.h>

#include <GL/glew.h>

struct sdl_library
{
	sdl_library()
	{
		std::cout << "starting up SDL" << std::endl;
		if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
			auto message = std::string("failed to start up SDL: ") + SDL_GetError();
			throw std::runtime_error(message);
		}
	}
	~sdl_library()
	{
        std::cout << "shutting down SDL" << std::endl;
		SDL_Quit();
	}
};

struct sdl_image_library
{
	sdl_image_library()
	{
		int flags = IMG_INIT_JPG | IMG_INIT_PNG | IMG_INIT_TIF;
		std::cout << "starting up SDL image" << std::endl;
        if ((IMG_Init(flags) & flags) != flags)
        {
			auto message = std::string("failed to start up SDL image: ") + IMG_GetError();
			throw std::runtime_error(message);
        }
	}
	~sdl_image_library()
	{
		std::cout << "shutting down SDL image" << std::endl;
		IMG_Quit();
	}
};

struct sdl_ttf_library
{
    sdl_ttf_library()
    {
        std::cout << "starting up SDL ttf" << std::endl;
        if (TTF_Init() == -1)
        {
            auto message = std::string("failed to start up SDL ttf: ") + TTF_GetError();
            throw std::runtime_error(message);
        }
    }
    ~sdl_ttf_library()
    {
        std::cout << "shutting down SDL ttf" << std::endl;
        TTF_Quit();
    }
};

struct sdl_mixer_library
{
	sdl_mixer_library()
	{
		int flags = MIX_INIT_FLAC | /*MIX_INIT_MOD |*/ MIX_INIT_MP3 | MIX_INIT_OGG;
		std::cout << "starting up SDL mixer" << std::endl;
        if ((Mix_Init(flags) & flags) != flags)
        {
			auto message = std::string("failed to start up SDL mixer: ") + Mix_GetError();
			throw std::runtime_error(message);
        }
	}
	~sdl_mixer_library()
	{
		std::cout << "shutting down SDL mixer" << std::endl;
		Mix_Quit();
	}	
};

struct physfs_library
{
    physfs_library(const std::string& argv0)
    {
        std::cout << "starting up PhysFS" << std::endl;
        if (!PHYSFS_init(argv0.c_str()))
        {
            throw std::runtime_error("failed to start up PhysFS");
        }
    }
    ~physfs_library()
    {
        std::cout << "shutting down PhysFS" << std::endl;
        PHYSFS_deinit();
    }
};

int main(int argc, char **argv)
{
	try
	{
		sdl_library();
		sdl_image_library();
        sdl_ttf_library();
		sdl_mixer_library();
        physfs_library(std::string(argv[0]));
	}
	catch (...)
	{
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
