#pragma once

class cLine;


















///////////////////////////////////////////////////////////////////////////////////////////////////////
// Name : 3D��ǥ��
// Desc : ȭ��� x,y,z ���� �׷���
///////////////////////////////////////////////////////////////////////////////////////////////////////

class cCoordinate
{
public:
	cCoordinate();
	~cCoordinate();


private:
	enum {X, Y, Z};
	cLine* m_pLine;

	int m_nLine2;
	cLine* m_pLine2[3];


public:
	int Create(float Size);
	int Release();

	int Draw();
};

