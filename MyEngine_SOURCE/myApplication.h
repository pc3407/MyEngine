#pragma once
#include "myGameObject.h"

namespace my
{
	class Application
	{
	public:
		Application();
		~Application();

		void Initialize(HWND hwnd);
		void Run();

		void Update();
		void LateUpdate();
		void Render();

	private:
		HWND mHwnd;
		HDC mHdc;

		//�÷��̾�
		GameObject mPlayer;
		GameObject mPlayer2;
	};
}