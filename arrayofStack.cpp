#include<iostream>
using namespace std;
int a[100];
int top = -1;
void push(int x)
{
	if(top == 100-1)
	{
		cout<<"stack: OVERFLOW";
		return;
	}
	top=top+1;
	a[top]=x;
}
void pop()
{
	if(top == -1)
	{
		cout<<"Stack: NO ELEMENT";
		return;
	}
	top=top-1;
}

void print()
{
	cout<<"PRINT:\n";
	for(int i=0;i<=top;i++)
	cout<<i<<": "<<a[i]<<endl;
}
int main()
{
	push(2);print();
	push(4);print();
	push(5);print();
	pop();print();
	push(6);print();
}
