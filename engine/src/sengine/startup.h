#pragma once
#include "sengine.hpp"

#ifdef WINDOWS
extern Sengine::sengine* Sengine::SeSart();

int main(int argc, char** argv)
{
	auto app = Sengine::SeSart();

	app->run();

	delete app;
}

#endif // WINDOWS