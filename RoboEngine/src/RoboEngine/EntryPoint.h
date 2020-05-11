#pragma once

#ifdef RE_PLATFORM_WINDOWS

extern RoboEngine::Application* RoboEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = RoboEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif