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
private:
	Node * m_Head;
	int m_iLength;
};