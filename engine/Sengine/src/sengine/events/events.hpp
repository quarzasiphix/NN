#pragma once
#include "includes/common.h"

namespace Sengine {
	class events {
		//eventpp::EventDispatcher<int, void()> dispatcher;

	};


	// making event dispatcher via eventpp api
	/*
	enum class Se_events {
		none = 0,
		yes, no,
		test
	};

	template <class Et>
	class event {;
	struct events {
		eventpp::EventDispatcher<Et, std::vector<Et>> dispatcher;
		std::vector<Et>* event_funcs;
		std::map<Et, event_funcs>* events_map = std::map(Et, event_funcs);
	};
		template <class Ts>
		class manage : public events{
			enum class eSeventT{eSevents};;
			std::vector<Ts>* sevents;

			template <typename i>
			bool add_event(i(*func)(i** argc[]));
			int position;
		public:
			std::map<Et, sevents>* events_map = std::map(Ts, sevents);
			
			template <typename i>
			bool exists(i(*func)(i** argc[]));
			
			template <typename i>
			bool dispatch(i, i);
			
			template <typename i>
			bool append(i(*func)(i** argc[]));
			
			template <typename i>
			bool rm(i(*func)(i** argc[]));
		};
	public:
		const char* buffer{};
		template <typename i>
		bool call(i, i** argc[]));
		template <typename i>
		bool remove(i);

	};*/
}

