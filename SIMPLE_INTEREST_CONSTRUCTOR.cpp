#include <iostream>

using namespace std;
const float r = 2.5;

class Interest
{
public:

  float p, t, si, total_amount;

    Interest ()
  {

    cout << "Enter Principal Amount: ";
    cin >> p;
    cout << "\nEnter Time in Years: ";
    cin >> t;

    si = (p * r * t) / 100;
    total_amount = si + p;


    cout << "\nEntered Details are:";
    cout << "\n\nPrincipal Amount: " << p;
    cout << "\n\nTime in Years: " << t;
    cout << "\n\nRate Of Interest: 2.5";

    cout << "\n\nSimple Interest: " << si;
    cout << "\n\nTotal Amount: " << total_amount;


  }

};

int
main ()
{

  Interest obj;

  return 0;
}

