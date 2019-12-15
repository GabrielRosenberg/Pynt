#pragma once
#include "Core.h"

namespace Pynt {
	class PYNT_API Application {
	public:
		Application();
		virtual ~Application();

		void run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
