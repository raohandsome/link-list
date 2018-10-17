#include "stdafx.h"
#include "Link.h"

Link::Link()
{
	m_Head = new Node;
	m_Head->Date = 0;
	m_Head->Next = nullptr;
	m_iLength = 0;
}

Link::~Link()
{
	Node *p = m_Head->Next;
	while (p)
	{
		Node *temp = p->Next;
		delete p;
		p = nullptr;
		p = temp;
	}
	delete m_Head;
	m_Head = nullptr;
}

void Link::addNode(Node * node)
{
	Node *p = m_Head;
	while (p->Next)
	{
		p = p->Next;
	}
	Node *temp = new Node;
	temp->Date = node->Date;
	temp->Next = p->Next;
	p->Next = temp;
	m_iLength++;
}

void Link::traverLink()
{
	Node *p = m_Head->Next;
	while (p)
	{
		cout << p->Date << endl;
		p = p->Next;
	}

}

Node Link::findMiddle()
{
	Node *fast = m_Head;
	Node *slow = m_Head;
	if (m_iLength%2 == 0)
	{
		while (fast->Next)
		{
			fast = fast->Next->Next;
			slow = slow->Next;
		}
	}
	else
	{
		while (fast)
		{
			fast = fast->Next->Next;
			slow = slow->Next;
		}
	}
	
	return *slow;
}
