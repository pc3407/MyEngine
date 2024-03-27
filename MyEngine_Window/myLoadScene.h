#pragma once
#include "..\\MyEngine_SOURCE\mySceneManager.h"

#include "myPlayScene.h"

namespace my
{
	void LoadScenes()
	{
		SceneManager::CreateScene<PlayScene>(L"PlayScene");

		SceneManager::LoadScene(L"PlayScene");
	}
}

