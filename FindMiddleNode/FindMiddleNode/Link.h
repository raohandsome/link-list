#pragma once
#include "stdafx.h"
#include "Node.h"
#include <iostream>
using namespace std;
class Link
{
public:
	Link();
	~Link();
	void addNode(Node *node);
	void traverLink();
	Node findMiddle();
	Node* headNode();
	void mergeLink(Link &link);
	bool checkLoop();//����Ƿ��л�����
	void creatLoop( int index);//�һ����
	int loopLength();//���ĳ���
	Node LoopStart();//�뻷���
	int LinkLoopLength();//������ʱ��������
private:
	Node * m_Head;
	int m_iLength;
};