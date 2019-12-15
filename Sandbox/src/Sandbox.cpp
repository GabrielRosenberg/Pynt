#include <Pynt.h>

class Sandbox : public Pynt::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Pynt::Application* Pynt::CreateApplication() {
	return new Sandbox();
}