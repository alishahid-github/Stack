//.cpp file to implement the Liked List class

#include<iostream>
#include"List.h"
using namespace std;

List::List()
{
	head = NULL;
}

Node* List::get_head() 
{
	return head; 
}
void  List::set_head(Node* h)
{ 
	head = h; 
}

void List::print() {

	Node* temp = head;		//traverse the head to nodes...
	while (temp != NULL) {
		cout << "The  List value= " << temp->get_data() << endl;
		temp = temp->get_next();
	}

}


int List::search(int d) {

	Node* temp = head;
	int i = 0;
	if (temp == NULL)
		return -1;
	else
	{
		if (head->get_data() == d)
			return i;
	}
	while (temp->get_data() != d)
	{
		if (temp->get_next() == NULL)
			return -1;
		else
		{
			i++;
			temp = temp->get_next();
		}
	}
	return i;
}

void List::insertH(int d)
{
	Node* new_node = new Node(d);
	new_node->set_next(head);
	head = new_node;
}

int List::delete_listH()
{
	int data = -1;
	if (head != NULL)
	{
		data =head->get_data();
		head = head->get_next();
		return data;
	}
		
	else
		return data;
}



