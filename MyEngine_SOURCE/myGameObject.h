#pragma once
#include "CommonInclude.h"

namespace my
{
	enum Shape
	{
		RECTANGLE,
		ELLIPSE,
		NONE,
	};

	class GameObject
	{
	public:
		GameObject();
		~GameObject();

		void Update();
		void LateUpdate();
		void Render(HDC hdc);

		void SetPosition(float x, float y)
		{
			mX = x;
			mY = y;
		}

		void SetBrush(COLORREF color)
		{
			mBrush = (HBRUSH)CreateSolidBrush(color);
		}

		void SetShape(Shape shape)
		{
			mShape = shape;
		}

		void SetKey(BYTE left, BYTE right, BYTE up, BYTE down)
		{
			leftKey = left;
			rightKey = right;
			upKey = up;
			downKey = down;
		}

		float GetPositionX() { return mX; }
		float GetPositionY() { return mY; }

	private:
		// 게임오브젝트의 좌표
		float mX;
		float mY;

		HBRUSH mBrush;
		HBRUSH mOldBrush;

		Shape mShape;

		BYTE leftKey;
		BYTE rightKey;
		BYTE upKey;
		BYTE downKey;
	};
}