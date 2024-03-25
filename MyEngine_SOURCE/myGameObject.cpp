#include "myGameObject.h"

namespace my
{
	GameObject::GameObject()
		: mX(0.0f)
		, mY(0.0f)
		, mBrush(nullptr)
		, mOldBrush(nullptr)
		, mShape(NONE)
		, leftKey(0)
		, rightKey(0)
		, upKey(0)
		, downKey(0)
	{
	}

	GameObject::~GameObject()
	{
		DeleteObject(mBrush);
		DeleteObject(mOldBrush);
	}

	void GameObject::Update()
	{
		if (GetAsyncKeyState(leftKey) & 0x8000)
		{
			mX -= 0.1f;
		}

		if (GetAsyncKeyState(rightKey) & 0x8000)
		{
			mX += 0.1f;
		}

		if (GetAsyncKeyState(upKey) & 0x8000)
		{
			mY -= 0.1f;
		}

		if (GetAsyncKeyState(downKey) & 0x8000)
		{
			mY += 0.1f;
		}
	}

	void GameObject::LateUpdate()
	{

	}

	void GameObject::Render(HDC hdc)
	{
		mOldBrush = (HBRUSH)SelectObject(hdc, mBrush);

		HPEN redPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
		HPEN oldPen = (HPEN)SelectObject(hdc, redPen);
		SelectObject(hdc, oldPen);

		if (mShape == RECTANGLE)
			Rectangle(hdc, mX, mY, mX + 200, mY + 200);
		else if(mShape == ELLIPSE)
			Ellipse(hdc, mX, mY, mX + 200, mY + 200);

		DeleteObject(redPen);
	}
}