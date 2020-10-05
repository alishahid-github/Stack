// A driver program which can implement the Linked list standard functions 

#include<iostream>
#include"Node.h"
#include"List.h"
#include"Stack.h"
#include<string>
using namespace std;

 
string Pop_Result(int res)   // A utility program for printing poped result
{
	string a = to_string(res);
	if (res == -1)
		return "\nStack is empty";
	else
		return "\nPoped value is= " + a ;
}

int main() {
	
	Stack S;
	S.push(5);
	S.push(4);
	S.push(3);
	S.push(2);
	S.push(1);
	int res = S.pop();  //storing poped value;
	cout << Pop_Result(res);
	res = S.pop();  
	cout << Pop_Result(res);
	res = S.pop();
	cout << Pop_Result(res);
	res = S.pop();  
	cout << Pop_Result(res);
	res = S.pop();
	cout << Pop_Result(res);
	res = S.pop();
	cout << Pop_Result(res);
	res = S.pop();
	cout << Pop_Result(res);
	
	S.push(111);
	S.push(131);
	S.push(0);

	res = S.pop();
	cout << Pop_Result(res);
	res = S.pop();
	cout << Pop_Result(res);
	res = S.pop();
	cout << Pop_Result(res);
	res = S.pop();
	cout << Pop_Result(res);


	


	cout << "\n\nProgram has been ended\n";
	system("pause");
}