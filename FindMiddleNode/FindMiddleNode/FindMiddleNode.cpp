// FindMiddleNode.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Link.h"
#include "stdlib.h"
int main()
{
	Link link;
	Node node1;
	node1.Date = 1;
	Node node2;
	node2.Date = 2;
	Node node3;
	node3.Date = 3;
	Node node4;
	node4.Date = 4;
	Node node5;
	node5.Date = 5;
	Node node6;
	node6.Date = 6;
	link.addNode(&node1);
	link.addNode(&node1);
	link.addNode(&node2);
	link.addNode(&node2);
	link.addNode(&node3);
	link.addNode(&node3);
	link.addNode(&node4);
	link.addNode(&node4);
	link.addNode(&node5);
	link.addNode(&node5);
	link.addNode(&node6);
	link.addNode(&node6);
	//link.addNode(&node1);
	link.traverLink();
	cout << endl;
	Node node=link.findMiddle();
	cout << node.Date << endl;
	system("pause");
    return 0;
}

