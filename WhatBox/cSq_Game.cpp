#include "cSq_Game.h"

#include "cCore.h"





































cSq_Game::cSq_Game()
{
	
}


cSq_Game::~cSq_Game()
{
	
}

/*----------------------------------------------------------------------------------*/

int cSq_Game::OnInit()
{
	cCore::Sprite.OnCamera(); // 2D 카메라 켜기


	return 0;
}


int cSq_Game::OnCleanUp()
{
	


	return 0;
}



int cSq_Game::OnRestore()
{



	return 0;
}


int cSq_Game::OnRelease()
{



	return 0;
}



int cSq_Game::OnDelete()   //일반 변수들 '삭제'(해제가 아님)
{
	


	return 0;
}



cSequence* cSq_Game::OnUpdate()
{
	cSequence* pNext = this;
	/*--------------------------------*/


	if(cCore::Input.KeyDown(VK_ESCAPE)) // NOTE: ESC키로 종료. 필요시 삭제.
		return EXIT_SEQ;


	cCore::Camera.Control(); // 3D 카메라 조작
	cCore::Camera2D.Control(); // 2D 스프라이트 카메라 조작


	/*--------------------------------*/
	return pNext;
}


int cSq_Game::OnRender()
{
	


	return 0;
}

