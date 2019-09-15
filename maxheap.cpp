#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int A[11];
int size=10;
int c=0;
///////////////////////////////////////////
maxHeapify(int A[], int i)
{
	int p=i;
	int l=2*i;
	int r=2*i+1;

	if(l <= size && A[l] > A[p])
		p=l;
	if(r <= size && A[r] > A[p])
		p=r;
	if(p != i)
	{
		int n=A[p];
		A[p]=A[i];
		A[i]=n;

		maxHeapify(A, p);

	}

}
///////////////////////////////////////////
buildMaxHeapify(int A[])
{
	for(int i=size/2; i>0; i--)
	{
		maxHeapify(A, i);
	}
}
///////////////////////////////////////////
int insert(int x)
{
			 if( c < size)
			 {
				A[++c]=x;
			 }
			 else
				cout<<"Heap is Full";
			 return 0;
}
///////////////////////////////////////////
int getMax()
{
	if(c > 0)
		return A[1];
	else
		cout<<"Heap is Empty";
}
///////////////////////////////////////////
void deleteMax()
{
	if(c > 0)
	{
		int x=A[1];
		A[1]=A[c--];
		buildMaxHeapify(A);
	}
	else
		cout<<"Heap is Empty";
}
///////////////////////////////////////////

main()
{
	for(int i=1; i<=10; i++)
	{
		insert(i);
	}

	buildMaxHeapify(A);

	//deleteMax();
	//insert(500) ;
	//buildMaxHeapify(A);

	for(int j=1; j<=10; j++)
	{
		cout<<A[j]<<"\t";
	}

	cout<<endl<<"Max element = "<< getMax();

}


