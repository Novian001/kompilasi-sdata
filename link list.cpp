#include <iostream>

using namespace std;

class Chainnode
{
	public :
	int data;
	Chainnode *next;
};

int main()
{
	Chainnode *A = new Chainnode;
	A -> data = 1;
	A -> next = 0;
	cout<< A -> data << " ";
	cout<< A -> next << endl;
	
	Chainnode *S = new Chainnode;
	S -> data = 2;
	S -> next = 0; 
	cout<< S -> data << " ";
	cout<< S -> next << endl;
	
	Chainnode *T = new Chainnode;
	T -> data = 3;
	T -> next = 0;
	cout<< T -> data << " ";
	cout<< T -> next << endl;
	
	S -> next =T; 
	cout<< S -> next -> data << endl;
//	cout << S -> next << endl;

	T -> next = S;
	cout<< T -> next -> data << endl;
	
	Chainnode *U = new Chainnode;
	U -> data = 6;
	U -> next = 0;
	cout<< U -> data << " ";
	cout<< U -> next << endl;
	
	S -> next -> next = U;
	cout<< S -> next -> next -> data << endl;
	
	U -> next = S;
	cout<< U -> next -> data << endl;
	
	Chainnode *X = S;
	cout<< X -> data << endl;
	
	while(X->next != S)
	{
		X = X -> next;
	}
	cout<< X -> data << endl;

	Chainnode *P = S;
	cout<< P -> data << endl;
	
	while(P->next->next != S)
	{
		P = P -> next;
	}
	cout<< P -> data << endl;
	
	P -> next = S;
	cout<< P -> next -> data << endl;
	
}	
