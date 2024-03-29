#pragma once
#include "myEntity.h"
#include "myComponent.h"

namespace my
{
	class SpriteRenderer : public Component
	{
	public:
		void Render(HDC hdc) override;
	};
}

