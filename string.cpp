#include <iostream>
using namespace std;

int main()
{
  string a = "My name is Eyal, ";
  string b = "I live in beer sheva.";
  string txt ="My name is Eyal and I live in beer sheva.";
  string fullName;
  string c = a + b;
  cout << txt.length();                    //.length() == .size()
  cout<<"\n";
  cout << txt.size();
  cout <<"\n";
  cout << c;
  cout << "\n";
  cout << a[1];                           // print y
  cout << "\n";
  c[0]='H';
  cout << c;
  cout << "\n";
  cout << "Type your full name: ";
  getline (cin, fullName);                // function getline - Allows absorption of an entire line and not just one word.
  cout << "Your name is: " << fullName;
}

