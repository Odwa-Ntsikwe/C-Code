#include <iostream>
#include "Pairs.h"
using namespace std;
int main()
{
  Pairs p1, p2;
  int f;
  cout << "Enter a set of integer coordinates" << endl
  << "in the form (x,y): ";
  cin >> p1;
  cout << "First value of ordered pair: ";
  cout << p1.get_first() << endl;
  cout << "Second value of ordered pair: ";
  cout << p1.get_second() << endl << endl;
  cout << "Enter another set of coordinates: ";
  cin >> p2;
  cout << "First value of ordered pair: ";
  cout << p2.get_first() << endl;
  cout << "Second value of ordered pair: ";
  cout << p2.get_second() << endl << endl;
  cout << "Addition of ordered pairs: ";
  cout << p1 + p2 << endl;
  cout << "Subtraction of orderd pairs: ";
  cout << p1 - p2 << endl;
  cout << "Multiplication of an ordered pair by 5: ";
  cout << p1 * p1 << endl;
  return 0;
}
