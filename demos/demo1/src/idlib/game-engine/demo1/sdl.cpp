#include "idlib/game-engine/demo1/sdl.hpp"

#include <cstdlib>
#include <string>
#include <iostream>

#include <SDL.h>
#undef main

#include <SDL_image.h>

#include <SDL_mixer.h>

#include <SDL_ttf.h>

#include <SDL_events.h>

#include <physfs.h>

#define GLEW_STATIC
#include <GL/glew.h>

#include <iostream>

std::string library::sanitize(const std::string& msg)
{
	if (msg.size() == 0) msg;
	if (msg[msg.size()-1] != '\n')
	{
		return msg + '\n';
	}
	return msg;
}

void library::info(const std::string& msg)
{
	auto sanitized_msg = sanitize(msg);
	if (sanitized_msg.size() == 0) return;
	std::cout << sanitized_msg << std::flush;
}

void library::warning(const std::string& msg)
{
	auto sanitized_msg = sanitize(msg);
	if (sanitized_msg.size() == 0) return;
	std::cout << sanitized_msg << std::flush;
}

void library::error(const std::string& msg)
{
	auto sanitized_msg = sanitize(msg);
	throw std::runtime_error(sanitized_msg);
}

sdl_library::sdl_library()
{
	info("starting up SDL (events, timer)");
	if (SDL_Init(SDL_INIT_EVENTS|SDL_INIT_TIMER) != 0)
	{
		auto message = std::string("failed to start up SDL (events, timer): ") + SDL_GetError();
		error(message);
	}
	info("starting up SDL (audio, video)");
	if (SDL_Init(SDL_INIT_AUDIO|SDL_INIT_VIDEO) != 0)
	{
		SDL_Quit();
		auto message = std::string("failed to start up SDL (audio, video): ") + SDL_GetError();
		error(message);
	}
	// Optional components.
	info("starting up SDL (joystick)");
	if (SDL_Init(SDL_INIT_JOYSTICK) != 0)
	{
		auto message = std::string("failed to start up SDL (joystick): ") + SDL_GetError();
		warning(message);
	}
	info("starting up SDL (gamecontroller)");
	if (SDL_Init(SDL_INIT_GAMECONTROLLER) != 0)
	{
		auto message = std::string("failed to start up SDL (gamecontroller): ") + SDL_GetError();
		warning(message);
	}
	info("starting up SDL (haptic)");
	if (SDL_Init(SDL_INIT_HAPTIC) != 0)
	{
		auto message = std::string("failed to start up SDL (haptic): ") + SDL_GetError();
		warning(message);
	}
}
	
sdl_library::~sdl_library()
{
	info("shutting down SDL");
	SDL_Quit();
}

sdl_image_library::sdl_image_library()
{
	int flags = IMG_INIT_JPG | IMG_INIT_PNG | IMG_INIT_TIF;
	info("starting up SDL image");
	if ((IMG_Init(flags) & flags) != flags)
	{
		auto message = std::string("failed to start up SDL image: ") + IMG_GetError();
		error(message);
	}
}

sdl_image_library::~sdl_image_library()
{
	info("shutting down SDL image");
	IMG_Quit();
}

sdl_ttf_library::sdl_ttf_library()
{
	info("starting up SDL ttf");
	if (TTF_Init() == -1)
	{
		auto message = std::string("failed to start up SDL ttf: ") + TTF_GetError();
		error(message);
	}
}

sdl_ttf_library::~sdl_ttf_library()
{
	info("shutting down SDL ttf");
	TTF_Quit();
}

sdl_mixer_library::sdl_mixer_library()
{
	int flags = MIX_INIT_FLAC | MIX_INIT_MOD | MIX_INIT_MP3 | MIX_INIT_OGG;
	info("starting up SDL mixer");
	if ((Mix_Init(flags) & flags) != flags)
	{
		auto message = std::string("failed to start up SDL mixer: ") + Mix_GetError();
		error(message);
	}
}

sdl_mixer_library::~sdl_mixer_library()
{
	info("shutting down SDL mixer");
	Mix_Quit();
}

physfs_library::physfs_library(const std::string& argv0)
{
	info("starting up PhysFS");
	if (!PHYSFS_init(argv0.c_str()))
	{
		error("failed to start up PhysFS");
	}
}

physfs_library::~physfs_library()
{
	info("shutting down PhysFS");
	PHYSFS_deinit();
}
