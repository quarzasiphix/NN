#pragma once

namespace Sengine {
	class SeApi log {
	public:
		static void init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger;  }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// core logger macros
#define SeLog_core_trace(...)	::Sengine::log::GetCoreLogger()->trace(__VA_ARGS__)
#define SeLog_core_info(...)	::Sengine::log::GetCoreLogger()->info(__VA_ARGS__)
#define SeLog_core_error(...)	::Sengine::log::GetCoreLogger()->error(__VA_ARGS__)
#define SeLog_core_warn(...)	::Sengine::log::GetCoreLogger()->warn(__VA_ARGS__)
#define SeLog_core_fatal(...)	::Sengine::log::GetCoreLogger()->fatal(__VA_ARGS__)

// client logger macros
#define SeLog_trace(...)	::Sengine::log::GetCoreLogger()->trace(__VA_ARGS__)
#define SeLog_info(...)		::Sengine::log::GetCoreLogger()->info(__VA_ARGS__)
#define SeLog_error(...)	::Sengine::log::GetCoreLogger()->error(__VA_ARGS__)
#define SeLog_warn(...)		::Sengine::log::GetCoreLogger()->warn(__VA_ARGS__)
#define SeLog_fatal(...)	::Sengine::log::GetCoreLogger()->fatal(__VA_ARGS__)
