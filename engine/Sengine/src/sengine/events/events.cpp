#include "events.hpp"

namespace Sengine {
	
	// event system ---
	/*
	template <class Et>
	template <class Ts>
	template <typename f>
	template <typename a>
	bool event<Et>::manage<Ts>::exists(f(*func)(a** argc[])) {
		if (events_map.begin() == events_map.find(Et(*func)(Ts** argc[]))) return false;
		else position = (events_map.begin == events_map.find(T))
		return true;
	}

	template <class Et>
	template <class Ts>
	template <typename f>
	template <typename a>
	bool event<Et>::manage<Ts>::add_event(Et(*func)(Ts** argc[])) {
		return sevents->push_back(T);
	}

	template<class Et>
	template<class Ts>
	template <typename f>
	template <typename a>
	inline bool event<Et>::manage<Ts>::append(Et(*func)(Ts** argc[])) {
		if (exists(Et(*func)(Ts** argc[])) == false) add_event(Ts)
		else return false;
	}

	template<class Et>
	template<class Ts>
	template <typename f>
	template <typename a>
	bool event<Et>::manage<Ts>::dispatch(f, a)
	{
		sevents[f(*func)(a **argc[])](a);
	}

	template <class Et>
	template <typename f>
	bool event<Et>::manage<Ts>::rm(f(*func)(a** argc[]))
	{
		if (exists(f(*func)(a **argc[]) == true) {
			sevents[f(*func)(a * *argc[])].clear()
		}	
		
	}
	*/
	/*
	template <class Et>
	template <class Ts>
	template <typename i>
	bool event<Et>::manage<Ts>::exists(i(*func)(i** argc[])) {
		if (events_map.begin() == events_map.find(i(*func)(i**argc[]))) return false;
		else position = (events_map.begin == events_map.find(T))
			return true;
	}

	template<class Et>
	template<class Ts>
	template <typename i>
	bool event<Et>::manage<Ts>::dispatch(i, i)
	{
		sevents[i(*func)(i**argc[])](i** argc[]);
	}

	template <class Et>
	template <typename i>
	inline bool event<Et>::call(i, i** argc[]) {
		if (this.exists(i(*func)(i **argc[])) == true) return dispatch(Et, i);
		else return false;
	}


	template <class Et>
	template <typename i>
	bool event<Et>::remove(i)
	{
		if (exists(events[]) == true) return rm(Et(*func)(Ts * *argc[]))
		else return false;
	}*/
}