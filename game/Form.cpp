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
	kInput.Update();
	mInput.Update();

	//終了
	if (kInput.GetPressFrame(KEY_INPUT_ESCAPE)) {
		return false;
	}

	//ここからプログラムを書く
	DrawFormatString(100, 100, 0xffffff, "ゲーム画面です。");
	
	return true;
}