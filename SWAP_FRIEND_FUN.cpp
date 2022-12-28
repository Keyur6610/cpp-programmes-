/*a program to swap the two numbers using friend function  */

#include <iostream>

using namespace std;

class A
{

private:
  int a, b, c;

  friend void swap (A ob);
};

void
swap (A ob)
{
  cout << "----------Before Swapping--------" << endl << endl;
  cout << "Enter Element 1: ";
  cin >> ob.a;
  cout << "Enter Element 2: ";
  cin >> ob.b;

  ob.c = ob.a;
  ob.a = ob.b;
  ob.b = ob.c;

  cout << endl << endl;
  cout << "-------After Swaping-------" << endl << endl;
  cout << "Element 1: " << ob.a << endl;
  cout << "Element 2: " << ob.b;


}

int
main ()
{

  A obj;
  swap (obj);

  return 0;
}
