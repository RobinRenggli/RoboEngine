#pragma once

#include "Core.h"

namespace RoboEngine {

	class ROBOENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();

}

