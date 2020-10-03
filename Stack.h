#include<iostream>
#include"List.h"
#ifndef STACK
#define STACK
using namespace std;
class Stack
{
private:
	List L1;
public:
	void push(int d);
	int pop();
	void print();
};


#endif