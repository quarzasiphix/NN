#include "events.hpp"

namespace Sengine {

	template<class E>
	template<class T>
	bool events<E>::SengineEvents<T>::exists(E(*func)(T** argc[])) {
		std::map<T, std::vector<T>> events;
		if (events.begin() == events.find((*func)(T * *argc[]))) return false;
		else {
			position = (events.begin == events.find(T))
				return true;
		}
	}

	template<class E>
	template<class T>
	bool events<E>::SengineEvents<T>::add_event(E(*func)(T** argc[])) {
		return events->push_back(T);
	}

	template<class E>
	template<class T>
	inline bool events<E>::SengineEvents<T>::append(T, E(*func)(T** argc[])) {
		if (exists(T) == false) add_event(T)
		else return false;
	}

	template<class E>
	template<class T>
	bool events<E>::SengineEvents<T>::dispatch(E, T)
	{
		events[E(*func)(T * *argc[])](T);
	}

	template<class E>
	template<class T>
	bool events<E>::SengineEvents<T>::rm(E, T)
	{
		if (exists(E(*func)(T * *argc[])))) {
			events[]
}
		
	}

	template<class E>
	template<class  T>
	inline bool events<E>::SengineEvents<T>::call(T) {
		if (exists(E(*func)(T **argc[])) == true) return dispatch(T, T);
		else return false;
	}


	template<class E>
	template<class T>
	bool events<E>::SengineEvents<T>::remove(T)
	{
		if (exists(E) == true) return rm(E(*func)(T * *argc[]))
		else return false;
	}
}