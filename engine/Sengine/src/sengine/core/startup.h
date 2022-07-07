#pragma once

#ifdef WINDOWS
extern Sengine::sengine* Sengine::SeSart();

int main(int argc, char** argv)
{
	Sengine::log::init();
	SeLog_core_warn("intialised log!");
	SeLog_info("testing");

	auto app = Sengine::SeSart();

	app->run();

	delete app;
}

#endif // WINDOWS