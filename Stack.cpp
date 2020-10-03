#include "Stack.h"
#include "Node.h"

void Stack::push(int d)
{
	L1.insertH(d);
}

int Stack::pop()
{
	return L1.delete_listH();
}

void Stack::print()
{
	if (L1.get_head() == NULL)
		cout << "\nStack is empty";
	else
	{
		Node* temp = L1.get_head();
		while(temp != NULL)
		{ 
			cout << "\tvalue is = "<<temp->get_data();
			temp = temp->get_next();
		}
	}
}
