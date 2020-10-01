//Header file for the Linked List with Basic funtions

#include<iostream>
#include"Node.h"
#ifndef LIST
#define LIST
using namespace std;
class List {
public:
	List();
	void insertH(int d);		// d=data
	int delete_listH();
	void print();
	int search(int d);
	void set_head(Node* h);
	Node* get_head();		// usage will be in main on neeed base
	int node_count = 0;

private:
	Node* head;

};

#endif
