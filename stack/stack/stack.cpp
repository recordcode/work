// stack.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Node{
public:
	Node(int d){
		data=d;
	};
	Node * next;
	Node();
	int getData(){
		return data;
	}
private:
	int data;
};
class Stack{
public:
	bool isEmpty();
	int pop();
	void push(int da);
	Stack(){
		head=new Node();
	}
	~Stack(){
		delete head;
	}
private:
	Node *head;
};
void Stack::push(int d){
	Node *node=new Node(d);
	node->next=head->next;
	head->next=node;
}
int Stack::pop(){
	int a;
	Node *q=head->next;
	head->next=q->next;
	a=q->getData();
	delete q;
	return a;
}

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

