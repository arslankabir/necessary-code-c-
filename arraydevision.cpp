#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
	int i,j;
	int mid=n/2;
	int left[mid];
	int right[n-mid];
	for(i=0;i<mid;i++)
	left[i]=arr[i];
	for(j=mid;j<n-1;j++)
	right[j-mid]=arr[j];
	for(i=0;i<mid;i++)
	cout<<"\nvaluesLeft: "<<left[i];
	for(j=mid;j<n-1;j++)
	cout<<"\nvaluesRight: "<<right[j];
	
	
}
int main()
{
	int arr[]={6,8,4,12,2,10};
	insertionsort(arr,6);
	//for(int i=0;i<6;i++)
//	cout<<arr[i]<<"  ";
}
