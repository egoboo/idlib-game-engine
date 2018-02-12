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

#include "idlib/game-engine/demo1/sdl.hpp"
#include <cstdlib>
#include <iostream>

int main(int argc, char **argv)
{
	try
	{
		sdl_library::initialize();
		sdl_image_library::initialize();
        sdl_ttf_library::initialize();
		sdl_mixer_library::initialize();
        physfs_library::initialize(std::string(argv[0]));
	}
	catch (std::runtime_error& ex)
	{
		std::cerr << ex.what();
	}
	catch (...)
	{
	}
	physfs_library::uninitialize();
	sdl_mixer_library::uninitialize();
	sdl_ttf_library::uninitialize();
	sdl_image_library::uninitialize();
	sdl_library::uninitialize();
	return EXIT_SUCCESS;
}
