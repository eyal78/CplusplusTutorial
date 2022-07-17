#include <iostream>

using namespace std;

int main()
{
	int x,y,max;
	cout << "Type a number 1:";
	cin >> x;
	cout << "Type a number 2:";
	cin >> y;
	if(x>y)
	{
		max=x;
		cout << "The x is bigger.";
	}
	else if(x!=y)
	{
		max=y;
		cout << "The y is bigger.";
	}
	else
  {
		cout << max <<"\n";
	  cout << "x==y";
  }
}

