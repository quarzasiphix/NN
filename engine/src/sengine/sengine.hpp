#pragma once
#include "core.hpp"

namespace Sengine {
	class SeApi sengine {
	public:
		sengine();
		virtual	~sengine();

		void run();
	};
	
	sengine* SeApp;

	extern sengine* SeSart();
}

