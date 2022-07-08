#pragma once
#include "includes/common.h"

namespace Sengine {
	enum class Se_events {
		none = 0,
		yes, no,
		test
	};

	template <class E>
	class events {
		std::vector<E>* events;
		std::map<E, std::vector<T>>* events_map = std::map(E, events);
		eventpp::EventDispatcher<E, events> dispatcher;
		template <class T >
		class SengineEvents : public events{
			std::vector<T>* events;
			Se_events sevent;
			bool add_event(E(*func)(T** argc[]));
		public:
			std::map<T, std::vector<T>>* events_map = std::map(T, events);
			int position;
			bool exists(E(*func)(T** argc[]));
			bool call(T);
			bool remove(T);
			bool append(E(*func)(void** argc[]));
			bool dispatch(E, T);
			bool rm(E, T);
		};
	public:
		/*
		SengineEvents Sevent;
		std::map events_map;
		const char* buffer{ false };
		bool find(T, T(*func)(T** argc[]));
		bool append(T, T(*func)(T** argc[]));
		bool dispatch(T, T(*func)(T** argc[]));
		bool call(T, T** argc[]);*/

	};



}

