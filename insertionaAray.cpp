#include<iostream>
using namespace std;
int main(){
	int i;
	int arr[10];
	cout<<"enter data: \n";
	for(i=0;i<5;i++)
	cin>>arr[i];
	cout<<" DATA STORED"<<"\n";
	for(i=0;i<5;i++)
	cout<<arr[i]<<"\n";
	int pos,num;
	cout<<"enter insertion position: ";
	cin>>pos;
	if ( pos>5 )
	{
		cout<<"insertion not possible please enter position less than 6:";
		return 0;
	}
	else
	{
		cout<<"enter the element you want to add: ";
		cin>>num;
	}
	pos=pos-1;
	for(i=5;i>=pos;i--)
	{
		arr[i+1]=arr[i];
		
	}
	arr[pos]=num;
	cout<<"The new Data in array: ";
	for(i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
	
	
}
