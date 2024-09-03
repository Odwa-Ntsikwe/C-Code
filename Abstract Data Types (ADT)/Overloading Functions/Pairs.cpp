Pairs.cpp
#include "Pairs.h"
#include <iostream>
using namespace std;
int digit_to_int(char c);
Pairs::Pairs(int first, int second)
{
  first = f;
  second = s;
}
Pairs::Pairs(int first)
{
  first = f;
}
Pairs::Pairs() : f(0), s(0)
{
  //Body intentionally empty
}
Pairs::~Pairs()
{
  cout << "Goodbye!" << endl;
}
Pairs Pairs::operator+(Pairs p)
{
  Pairs temp;
  temp.f = f + p.f;
  temp.s = s + p.s;
  return temp;
}
Pairs Pairs::operator-(Pairs p)
{
  Pairs temp;
  temp.f = f - p.f;
  temp.s = s - p.s;
  return temp;
}
Pairs Pairs::operator*(Pairs p)
{
  Pairs temp;
  temp.f = 5 * p.f;
  temp.s = 5 * p.s;
  return temp;
}
int Pairs::get_first() const
{
  return f;
}
int Pairs::get_second() const
{
  return s;
}
void Pairs::set_first(int first)
{
  first = f;
}
void Pairs::set_second(int second)
{
  second = s;
}
void Pairs::reset(int first, int second)
{
  first = f;
  second = f;
}
istream& operator>>(istream& ins, Pairs& p)
{
  char open_bracket, coma, closed_bracket, digit1, digit2;
  int first, second;
  ins >> open_bracket >> digit1 >> coma >> digit2 >> closed_bracket;
  if (open_bracket != '(' || !isdigit(digit1) || !isdigit(digit2) || coma != ',' || closed_bracket != ')')
  {
    cout << "Error illegal entry.\n";
    exit(1);
  }
  first = digit_to_int(digit1);
  second = digit_to_int(digit2);
  p.f = first;
  p.s = second;
  return ins;
}
ostream& operator<<(ostream& outs, const Pairs& p)
{
  int f, s;
  outs << "(" << p.f << "," << p.s << ")" << endl;
  return outs;
}
int digit_to_int(char c)
{
  return (static_cast<int>(c) - static_cast<int>('0'));
}
