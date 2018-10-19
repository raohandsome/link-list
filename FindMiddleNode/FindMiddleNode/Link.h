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
	void traverLink() const;
	Node findMiddle()const;
	Node* headNode () const;
	void mergeLink (Link &link) ;
	bool checkLoop()const;//����Ƿ��л�����
	void creatLoop( const int index) const;//�һ����
	int loopLength() const;//���ĳ���
	Node* LoopStart() const;//�뻷���
	int LinkLoopLength() const;//������ʱ��������
	Node& backNode(const int index) const;
private:
	Node * m_Head;
	int m_iLength;
};