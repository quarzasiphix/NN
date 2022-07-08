#include <src/sengine.h>

class sandbox : public Sengine::sengine
{
public:
	sandbox() {

	}
	~sandbox() {

	}
};

Sengine::sengine* Sengine::SeSart()
{
	return new sandbox();
}
