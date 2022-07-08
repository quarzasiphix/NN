#pragma once

#include <iostream>
#include <memory>
#include <utility>
#include <algorithm>
#include <functional>

#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>


#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <eventpp/eventdispatcher.h>

#include <src/sengine/core/core.hpp>
#include <src/sengine/log/log.hpp>
#include <src/sengine/events/events.hpp>

#ifdef WINDOWS
	#include <Windows.h>
#endif // WINDOWS

