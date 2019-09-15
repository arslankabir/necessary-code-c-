#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
void reverse(char *c,int n)
{
	stack<char> s;
	//pushing string into stack
	for(int i=0;i<n;i++)
	s.push(c[i]);
	
	for(int i=0;i<n;i++)
	{
	c[i]=s.top();
	s.pop();
}
	
	
	
}
int main()
{
	char a[11];
	cout<<"enter any string: ";
	gets(a);
	reverse(a,strlen(a));
	cout<<"Reverse of String is: "<<a;
}
