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
	cCore::Sprite.OnCamera(); // 2D ī�޶� �ѱ�


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



int cSq_Game::OnDelete()   //�Ϲ� ������ '����'(������ �ƴ�)
{
	


	return 0;
}



cSequence* cSq_Game::OnUpdate()
{
	cSequence* pNext = this;
	/*--------------------------------*/


	if(cCore::Input.KeyDown(VK_ESCAPE)) // NOTE: ESCŰ�� ����. �ʿ�� ����.
		return EXIT_SEQ;


	cCore::Camera.Control(); // 3D ī�޶� ����
	cCore::Camera2D.Control(); // 2D ��������Ʈ ī�޶� ����


	/*--------------------------------*/
	return pNext;
}


int cSq_Game::OnRender()
{
	


	return 0;
}

