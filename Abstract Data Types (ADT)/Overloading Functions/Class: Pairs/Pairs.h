Pairs.h
#ifndef PAIRS_H
#define PAIRS_H
#include <iostream>
using namespace std;
class Pairs
{
public:
  Pairs operator+(Pairs p);
  //Returns the sum of p1 and p2.

  Pairs operator-(Pairs p);
  //Returns p1 minus p2.

  Pairs operator*(Pairs p);
  //Returns p1/p2 multiplied by and integer.

  Pairs(int first, int second);
  //Intialises the object so its values represents
  //the first and second integers of an ordered pair.

  Pairs(int first);
  //Intialises the object so its value represents
  //the first integer of an ordered pair.

  Pairs();
  //Initialises both data members to 0.

  ~Pairs();
  //Returns all the dynamic memory used by the object to the freestore
  //as well as outputs the message 'Goodbye'.

  int get_first() const;
  //Returns the first value of an ordered pair.

  int get_second() const;
  //Returns the second value of an ordered pair.

  void set_first(int first);
  //Postcondition: the ordered pair has been set
  //to provide its first value.

  void set_second(int second);
  //Postcondition: the ordered pair has been set
  //to provide its second value.

  void reset(int first, int second);
  //Postcondition: the ordered pair has been reset
  //to values specified by the parameter.

  friend istream& operator>>(istream& ins, Pairs& the_object);
  //Precondition: If ins is a file input stream, then ins has already been
  //connected to a file.

  friend ostream& operator<<(ostream& outs, const Pairs& the_object);
  //Precondition: If outs is a file output stream, then outs has already been
  //connected to a file.
private:
  int f;
  int s;
  int num;
};
#endif // PAIRS_H
