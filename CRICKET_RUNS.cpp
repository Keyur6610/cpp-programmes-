/*
Assume a class cricketer is declared. Declare a derived class batsman 
from cricketer. Data member of batsman. Total runs, Average runs and 
best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)
*/

#include <iostream>
using namespace std;

class Cricketer
{
public:
  string name;
  int ing_runs[10];


};

class Batsman:public Cricketer
{

public:
  int total_runs, avg_runs, best_pfm, max;

  void inputData ()
  {

    cout << "Enter Cricketer Name: ";
    cin >> name;

    for (int i = 0; i < 10; i++)
      {

	cout << "Enter Inning " << i + 1 << " Run: ";
	cin >> ing_runs[i];

      }

  }

  void average ()
  {
    total_runs = 0;

    for (int i = 0; i < 10; i++)
      {

	total_runs = total_runs + ing_runs[i];


      }


    avg_runs = total_runs / 10;

    max = ing_runs[0];

    for (int i = 0; i < 10; i++)
      {

	if (ing_runs[i] > max)
	  max = ing_runs[i];
      }

  }

  void displayData ()
  {
    cout << "Name Of Batsman is: " << name << endl;
    cout << "Total Run is: " << total_runs << endl;
    cout << "Average Run is: " << avg_runs << endl;
    cout << "Best Performance: " << max;

  }

};

int
main ()
{

  Batsman obj;
  obj.inputData ();
  obj.average ();
  obj.displayData ();


  return 0;
}

