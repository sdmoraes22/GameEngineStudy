#pragma once


extern Engine::Application* Engine::CreateApplication();

#ifdef ENGINE_PLATFORM_WINDOWS
	int main(int argc, char** argv)
	{
		Engine::Log::Init();

		ENGINE_CORE_WARN("Engine Initialized Log");
		int a = 5;
		ENGINE_INFO("Hello! Var={0}", a);

		auto app = Engine::CreateApplication();
		app->Run();
		delete app;
	}
#endif