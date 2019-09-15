#include<iostream>
using namespace std;

int factbyiterative(int a)
{
	int p=1;
	while(a>=1)
	{
		p=p*a;
		a--;
	}
	return p;
}
int main()
{
	int n;
	cout<<"enter number: ";
	cin>>n;
	int ans = factbyiterative(n);
	cout<<"\nans is: "<<ans;

	
	
}
