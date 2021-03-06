#pragma once
#include "includes/common.h"

#ifdef WINDOWS
extern Sengine::sengine* Sengine::SeSart();

int main(int argc, char** argv)
{
	Sengine::log::init();
	SeLog_core_warn("intialised log!");
	SeLog_info("testing");
	SeLog_info("test2");
	auto app = Sengine::SeSart();

	app->run();

	delete app;
}

#endif // WINDOWS