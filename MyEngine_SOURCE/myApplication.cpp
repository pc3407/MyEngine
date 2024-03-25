#include "myApplication.h"

namespace my
{
	Application::Application()
		: mHwnd(nullptr)
		, mHdc(nullptr)
	{

	}
	Application::~Application()
	{

	}

	void Application::Initialize(HWND hwnd)
	{
		mHwnd = hwnd;
		mHdc = GetDC(hwnd);

		mPlayer.SetPosition(100, 100);
		mPlayer.SetBrush(RGB(0, 0, 255));
		mPlayer.SetShape(RECTANGLE);
		mPlayer.SetKey(VK_LEFT, VK_RIGHT, VK_UP, VK_DOWN);

		mPlayer2.SetPosition(500, 500);
		mPlayer2.SetBrush(RGB(255, 0, 0));
		mPlayer2.SetShape(ELLIPSE);
		mPlayer2.SetKey('A', 'D', 'W', 'S');
	}
	void Application::Run()
	{
		Update();
		LateUpdate();
		Render();
	}
	void Application::Update()
	{
		mPlayer.Update();
		mPlayer2.Update();
	}
	void Application::LateUpdate()
	{
		
	}
	void Application::Render()
	{
		mPlayer.Render(mHdc);

		mPlayer2.Render(mHdc);
	}
}