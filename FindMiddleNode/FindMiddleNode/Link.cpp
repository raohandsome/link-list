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

Node Link::findMiddle()//用快慢指针找中间点
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

Node* Link::headNode()
{
	return m_Head;
}

void Link::mergeLink(Link &link)
{
	Node *p1 = m_Head;
	Node *p2 = link.headNode()->Next;
	while (p1->Next&&p2)
	{
		if (p1->Next->Date <=p2->Date)
		{
			p1 = p1->Next;
		}
		else
		{
			Node *temp = p2->Next;
			p2->Next = p1->Next;
			p1->Next = p2;
			p1 = p1->Next;
			p2 = temp;
			m_iLength++;
		}
	}
	if (p2)
	{
		p1->Next = p2;
	}
}

bool Link::checkLoop()//检测是否有环
{
	Node *fast = m_Head;
	Node *slow = m_Head;
	while (fast->Next)
	{
		fast = fast->Next->Next;
		slow = slow->Next;
		if (slow == fast)
		{
			break;
		}	
	}
	return fast->Next == nullptr ? false : true;
}

void Link::creatLoop(int index)//产生环路
{
	Node *p = m_Head;
	Node *temp=nullptr;
	int i = 0;
	while (p->Next)
	{
		p = p->Next;
		i++;
		if (i == index)
		{
			temp = p;
		}
	}
	p->Next = temp;
}

int Link::loopLength()//环的长度
{
	Node *fast = m_Head;
	Node *slow = m_Head;
	int length = 0;
	while (fast->Next)
	{
		fast = fast->Next->Next;
		slow = slow->Next;
		length++;
		if (slow == fast)
		{
			break;
		}
	}
	
	return length;
	
}

Node Link::LoopStart()//入环结点
{
	Node *fast = m_Head;
	Node *slow = m_Head;
	while (fast->Next)
	{
		fast = fast->Next->Next;
		slow = slow->Next;
		if (slow == fast)
		{
			break;
		}
	}
	Node *temp = m_Head;
	while (temp != slow)
	{
		temp = temp->Next;
		slow = slow->Next;
	}
	return *slow;

}

int Link::LinkLoopLength()//环存在时，链表长度
{
	Node *fast = m_Head;
	Node *slow = m_Head;
	int loopLength = 0;
	while (fast->Next)
	{
		fast = fast->Next->Next;
		slow = slow->Next;
		loopLength++;
		if (slow == fast)
		{
			break;
		}
	}
	Node *temp = m_Head;
	int i = 0;
	while (temp != slow)
	{
		temp = temp->Next;
		slow = slow->Next;
		i++;
	}

	return loopLength+i-1;
}
