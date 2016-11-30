#include <stdio.h>
#include "Form.h"

using namespace CommonSettings;
//---------------------------------------------------------------------------
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);//�E�B���h�E���[�h�ŋN��//FALSE���ƃt���X�N���[��
	SetGraphMode(WINDOW_WIDTH, WINDOW_HEIGHT, 32);//�E�B���h�E�T�C�Y
	if (DxLib_Init() == -1) {
		return -1;
	}

	Form Fmain;

	// �`���𗠉�ʂɕύX
	SetDrawScreen(DX_SCREEN_BACK);
	while (1) {
		if (ProcessMessage() != 0) {//���b�Z�[�W����
			break;//�E�B���h�E�́~�{�^���������ꂽ�烋�[�v�𔲂���
		}
		ClearDrawScreen();

		if (!Fmain.Update()) {
			break;
		}
		ScreenFlip();//����ʂ𔽉f
	}

	DxLib_End();
	return 0;
}
//---------------------------------------------------------------------------