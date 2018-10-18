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
	bool checkLoop();//检测是否有环村子
	void creatLoop( int index);//搭建一个环
	int loopLength();//环的长度
	Node LoopStart();//入环结点
	int LinkLoopLength();//环存在时，链表长度
private:
	Node * m_Head;
	int m_iLength;
};