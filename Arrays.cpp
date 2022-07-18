
#include <iostream>

using namespace std;

int main()
{
	int i,x;
	int A[10]={2,8,6,4,10,3,1,9,7,5};
	for(i=0;i<10;i++)
	{
		cout << A[i]<<" ";
	}
    cout << "\n";
	for(i=0;i<9;i++)
	{
		if(A[i]>A[i+1])
		{
			x=A[i];
			A[i]=A[i+1];
			A[i+1]=x;
		}
	}
	for(i=0;i<10;i++)
		cout << A[i]<<" ";
}
