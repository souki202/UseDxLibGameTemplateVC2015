#include "Form.h"
Form::Form()
{
	SetMainWindowText(CommonSettings::GAME_TITLE);//ウィンドウのタイトル
}

Form::~Form()
{
}

bool Form::Update()
{
	//キーボード, マウスの状態を更新
	keyInput.Update();
	mouseInput.Update();

	//終了
	if (keyInput.GetPressFrame(KEY_INPUT_ESCAPE)) {
		return false;
	}

	//ここからプログラムを書く
	DrawFormatString(100, 100, 0xffffff, "ゲーム画面です。");
	
	return true;
}