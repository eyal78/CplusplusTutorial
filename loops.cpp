#include <iostream>

using namespace std;

int main()
{
	int i=0;
	while(i<5)
	{
		int j=0;
		while(j<5)
		{
			cout << "*";
			j++;

		}
      cout << "*   ";
      i++;
	}                       //print ******   ******   ******   ******   ******
      cout << "\n";
      for (i=0;i<5;i++)
      {
         for(j=0;j<5;j++)
	 {
       	   cout << "*";
	 }
	 cout << "*   ";
      }                         //print ******   ******   ******   ******   ****** 
}
