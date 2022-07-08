#include "includes/common.h"

namespace Sengine {
	std::shared_ptr<spdlog::logger> log::s_ClientLogger;
	std::shared_ptr<spdlog::logger> log::s_CoreLogger;

	void log::init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");

		s_CoreLogger = spdlog::stdout_color_mt("Sengine");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("Sandbox");
		s_CoreLogger->set_level(spdlog::level::trace);

	}
}
