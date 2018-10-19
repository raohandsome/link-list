// FindMiddleNode.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Link.h"
#include "stdlib.h"
int main()
{
	Link link1;
	Link link2;
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
	link1.addNode(&node1);
	link1.addNode(&node2);
	link1.addNode(&node4);
	link1.addNode(&node5);
	link1.addNode(&node3);
	link1.addNode(&node3);
	link1.addNode(&node2);
	link1.addNode(&node4);
	link1.addNode(&node6);
	link1.addNode(&node6);
	link2.addNode(&node2);
	link2.addNode(&node3);
	link2.addNode(&node3);
	link2.addNode(&node4);
	link2.addNode(&node5);


	cout << "link1:" << endl;
	link1.traverLink();
	cout << endl;
	cout << "link2:" << endl;
	link2.traverLink();
	cout << endl;
	Node nodeone =  link1.findMiddle();
	Node nodetwo = link2.findMiddle();
	cout <<"link1 middle:"<< nodeone.Date << endl;
	cout << "link2 middle:" << nodetwo.Date << endl;
	cout << endl;
	//两个有序链表
	link1.mergeLink(link2);
	cout << "merge link:" << endl;
	link1.traverLink();
	Node node = link1.backNode(6);
	cout << "倒数第n点："<<node.Date << endl;
	bool result1 = link1.checkLoop();
	cout <<"是否为环：" <<result1 << endl;
	link1.creatLoop(7);
	bool result2=link1.checkLoop();
	cout <<"是否为环："<< result2 << endl;
	int looplength=link1.loopLength();
	cout << "looplength: "<<looplength << endl;
	Node *startNode = link1.LoopStart();
	cout << "入口结点"<<startNode->Date << endl;
	int length = link1.LinkLoopLength();
	cout << "链表长度"<<length << endl;
	system("pause");
    return 0;
}

