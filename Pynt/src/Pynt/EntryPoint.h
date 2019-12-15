#pragma once

#ifdef PY_PLATFORM_WINDOWS

extern Pynt::Application* Pynt::CreateApplication();

int main(int argc, char** argv) {
	auto app = Pynt::CreateApplication();
	app->run();
	delete app;
}

#endif