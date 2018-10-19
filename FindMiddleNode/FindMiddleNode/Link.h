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
	bool checkLoop()const;//检测是否有环村子
	void creatLoop( const int index) const;//搭建一个环
	int loopLength() const;//环的长度
	Node* LoopStart() const;//入环结点
	int LinkLoopLength() const;//环存在时，链表长度
	Node& backNode(const int index) const;
private:
	Node * m_Head;
	int m_iLength;
};