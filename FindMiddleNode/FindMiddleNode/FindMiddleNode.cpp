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
	/*bool result1 = link1.checkLoop();
	cout << result1 << endl;*/
	link1.creatLoop(7);
	bool result2=link1.checkLoop();
	cout <<"是否为环："<< result2 << endl;
	int looplength=link1.loopLength();
	cout << "looplength: "<<looplength << endl;
	Node *node = link1.LoopStart();
	cout << "入口结点"<<node->Date << endl;
	int length = link1.LinkLoopLength();
	cout << "链表长度"<<length << endl;
	//link2.addNode(&node2);
	//link2.addNode(&node3);
	//link2.addNode(&node3);
	//link2.addNode(&node4);
	//link2.addNode(&node5);
	////link2.addNode(&node6);
	////link.addNode(&node1);
	//link1.traverLink();
	//cout << endl;
	//link2.traverLink();
	//cout << endl;
	//Node nodeone =  link1.findMiddle();
	//Node nodetwo = link2.findMiddle();
	//cout << nodeone.Date << endl;
	//cout << nodetwo.Date << endl;
	//cout << endl;
	//link1.mergeLink(link2);
	//link1.traverLink();
	system("pause");
    return 0;
}

