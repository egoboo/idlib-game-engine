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
		if (SDL_Init(SDL_INIT_VIDEO) != 0) {
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

struct sdl_opengl_library : public sdl_library
{
	sdl_opengl_library()
		: m_window(nullptr)
	{
		std::cout << "starting up OpenGL 3.1" << std::endl;
		SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
		SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
		SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
		m_window = SDL_CreateWindow("SDL OpenGL 3.1", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN);
		if (!m_window) {
			auto message = std::string("failed to start up OpenGL 3.1: ") + SDL_GetError();
			throw std::runtime_error(message);
		}
	}
	~sdl_opengl_library()
	{
		std::cout << "shutting down OpenGL 3.1" << std::endl;
		if (m_window)
		{
			SDL_DestroyWindow(m_window);
			m_window = nullptr;
		}
	}
private:
	SDL_Window *m_window;
};

int main(int argc, char **argv)
{
	try
	{
		sdl_opengl_library();
	}
	catch (...)
	{
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
