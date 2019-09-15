#include<iostream>
using namespace std;
int main(){
	int i;
	int arr[10];
	cout<<"Enter data: \n";
	for(i=0;i<5;i++)
	cin>>arr[i];
	cout<<" DATA STORED"<<"\n";
	for(i=0;i<5;i++)
	cout<<arr[i]<<"\n";
	int pos,num;
	cout<<"enter deletion position: ";
	cin>>pos;
	if ( pos>5 )
	{
		cout<<"deletion not possible";
	}
	else
	{
	pos=pos-1;
	for(i=pos;i<=5-1;i++)
		arr[i]=arr[i+1];
	}
	cout<<"The new Data in array: \n";
	for(i=0;i<5-1;i++)
		cout<<arr[i]<<" ";
	return 0;
	
	
}
