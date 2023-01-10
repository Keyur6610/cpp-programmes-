#include <iostream>

using namespace std;

template < typename x > 

class A
{
public:

  x a, b, c;

  x swap (x a, x b)
  {

    c = a;			//c=10
    a = b;			//a=20
    b = c;			//b=10
    cout << "a is: " << a << endl;
    cout << "b is: " << b << endl;

    return 0;
  }


};


int main ()
{

  A < int >obj;
  obj.swap (10, 20);
  cout << endl;
  
  A < char >obj1;
  obj1.swap ('k', 'p');
  cout << endl;
  
  A < float >obj2;
  obj2.swap (2.5, 3.5);

  return 0;
}

