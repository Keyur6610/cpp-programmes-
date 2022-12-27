#include <iostream>

using namespace std;

class bankAccount
{

public:
  string name;
  string actype;
  int debal, wibal, tbal, acnum;

  void getData (string n, string type, int num, int b)
  {

    name = n;
    actype = type;
    acnum = num;
    tbal = b;

  }


  void deposit ()
  {

    cout << "----------Deposit Amount----------" << endl << endl;
    cout << "Enter Amount to Deposit: ";
    cin >> debal;
    tbal = tbal + debal;
    cout << "Total Balance is: " << tbal << endl << endl;


  }

  void withdraw ()
  {

    cout << "-----------Withdraw Amount-----------" << endl << endl;
    cout << "Enter Amount to Withdraw: ";
    cin >> wibal;
    tbal = tbal - wibal;
    cout << "Total Balance is: " << tbal << endl << endl;


  }

  void Display_Name_Balance ()
  {

    cout << "-----------Account Info-----------" << endl << endl;
    cout << "Name: " << name << endl;
    cout << "Account Number: " << acnum << endl;
    cout << "Type of Account: " << actype << endl;
    cout << "Balance Amount in The Account: " << tbal << endl << endl;




  }


};

int main ()
{

  int choice;
  string ch = "yes";
  string ch1;

  bankAccount obj;
  obj.getData ("Keyur", "Saving", 12345, 1000);
  obj.Display_Name_Balance ();

  do
    {
      cout << "Enter 1 For Deposit" << endl;
      cout << "Enter 2 For Withdraw" << endl;
      cin >> choice;
      cout << endl;


      switch (choice)
	{

	case 1:

	  obj.deposit ();
	  break;

	case 2:

	  obj.withdraw ();
	  break;

	default:

	  cout << "invalid choice..!!" << endl << endl;
	  break;

	}
      cout << "yes for continue & no for discontinue" << endl;
      cout << "Do You Want to Continue: ";
      cin >> ch1;
      cout << endl;


    }
  while (ch == ch1);


  return 0;
}
