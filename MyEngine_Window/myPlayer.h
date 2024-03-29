#pragma once
#include "myGameObject.h"

namespace my
{
	class Player : public GameObject
	{
	public:
		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;	
	};
}