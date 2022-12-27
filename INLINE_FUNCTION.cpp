#include <iostream>

using namespace std;

class A
{

public:
  float x, y, z;

  inline void mul ()
  {

    cout << "---------Multiplication---------" << endl << endl;
    cout << "Enter The Element 1: ";
    cin >> x;
    cout << "Enter The Element 2: ";
    cin >> y;
    cout << endl;
    cout << "Multiplication is: " << x * y << endl << endl;


  }

  inline void cube ()
  {

    cout << "---------Cube---------" << endl << endl;
    cout << "Enter The Element: ";
    cin >> z;
    cout << "Cube is: " << z * z * z;


  }


};


int
main ()
{

  A obj;
  obj.mul ();
  obj.cube ();

  return 0;
}
