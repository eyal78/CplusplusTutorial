#include <iostream>
using namespace std;
//
void myFunction()
{
  cout << "my name is Eyal!\n";
}
//
void myFunction(string name)
{
	cout << "my name is "<<name<<"\n";
}
//
int myFunction(int x)
{
  return 5 + x;
}
//
int main()
{
	myFunction();
	myFunction("Eyal");
	cout << myFunction(3);

}
