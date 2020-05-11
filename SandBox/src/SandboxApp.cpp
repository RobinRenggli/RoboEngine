#include <RoboEngine.h>

class Sandbox : public RoboEngine::Application
{
public: 
	Sandbox() 
	{

	}

	~Sandbox()
	{

	}
};

RoboEngine::Application* RoboEngine::CreateApplication()
{
	return new Sandbox();
}