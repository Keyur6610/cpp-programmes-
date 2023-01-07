#include <iostream>

using namespace std;

template < typename x > 

class A
{
public:

  x a, num[5], n = 5, i, j;
  x arrSort ()
  {

    cout << "Enter 5 Elements" << endl;
    for (i = 0; i < n; i++)
      {

	cin >> num[i];

      }

    for (i = 0; i < n; i++)
      {
	for (j = i + 1; j < n; j++)
	  {

	    if (num[i] > num[j])
	      {
		a = num[i];
		num[i] = num[j];
		num[j] = a;
	      }
	  }
      }

    cout << "Ascending Order" << endl;
    for (i = 0; i < n; i++)
      {
	cout << num[i] << endl;
      }
   return 0;
  }


};

int main ()
{

  A < int >obj;
  obj.arrSort ();

  return 0;
}

