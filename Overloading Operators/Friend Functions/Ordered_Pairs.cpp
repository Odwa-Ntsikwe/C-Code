//Uses class Pairs to perform operations on ordered pairs.
#include <iostream>

using namespace std;

class Pairs
{
public:
  friend Pairs operator+(const Pairs& p1, const Pairs& p2);
  //Returns the sum of p1 and p2.

  friend Pairs operator-(const Pairs& p1, const Pairs& p2);
  //Returns p1 minus p2.

  friend Pairs operator*(const Pairs& p1, int first);
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
};

int digit_to_int(char c);

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
  cout << "Enter another an integer: ";
  cin >> f;
  cout << endl;
  cout << "Addition of ordered pairs: ";
  cout << p1 + p2 << endl;
  cout << "Subtraction of orderd pairs: ";
  cout << p1 - p2 << endl;
  cout << "Multiplication of an ordered pair with an integer: ";
  cout << p1 * f << endl;
  return 0;
}
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
Pairs operator+(const Pairs& p1, const Pairs& p2)
{
  Pairs temp;
  temp.f = p1.f + p2.f;
  temp.s = p1.s + p2.s;
  return temp;
}
Pairs operator-(const Pairs& p1, const Pairs& p2)
{
  Pairs temp;
  temp.f = p1.f - p2.f;
  temp.s = p1.s - p2.s;
  return temp;
}
Pairs operator*(const Pairs& p1, int f)
{
  Pairs temp;
  temp.f = p1.f * f;
  temp.s = p1.s * f;
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
