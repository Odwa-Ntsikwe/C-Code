//Uses a class Odometer to track fuel and traveling distance for a car
#include <iostream>
using namespace std;
class Odometer
{
public:
  Odometer(double distDriven, double fuelEff);
  //Initialises the distance driven and fuel efficiency
  //to details entered by the user.

  Odometer();
  //Initialises the distance driven and fuel efficiency to zero.

  ~Odometer();
  //Returns all the dynamic memory used by the object to the freestore.

  void reset_kms();
  //Postcondition: the odometer has been reset to zero.

  void set_fuelEfficiency(double fuelEff);
  //Postcondition: the odometer has been set
  //to provide vehicle's fuel efficiency.

  void add_totalKms(double total_Kms);
  //Postcondition: distance travelled in current trip
  //has been added to odometers total distance.

  double get_litresUsed();
  //Returns the number of liters of fuel
  //that the car used since the odometer was last reset.

  double get_kms() const;
  //Returns the distance in kms travelled by the vehicle.

  double get_fuelEfficiency() const;
  //Returns the fuel efficiency of the vehicle.
private:
  double distanceDriven;
  double fuelEfficiency;
};
int main()
{
  Odometer vehicle1(35000.0, 45.5), vehicle2(66850.0, 60.90);

  cout << "Initial odometer reading" << endl;
  cout << "===========================" << endl;
  cout << "Kilometers driven by vehicle 1: ";
  cout << vehicle1.get_kms() << endl;
  cout << "Kilometers driven by vehicle 2: ";
  cout << vehicle2.get_kms() << endl;
  cout << "Fuel efficiency of vehicle 1: ";
  cout << vehicle1.get_fuelEfficiency() << endl;
  cout << "Fuel efficiency of vehicle 2: ";
  cout << vehicle2.get_fuelEfficiency() << endl << endl;
  cout << "Adding 100km to vehicle 1" << endl
  << "and 500km to vehicle 2" << endl;
  cout << "-------------------------------------" << endl;
  vehicle1.add_totalKms(100.0);
  vehicle2.add_totalKms(500.0);
  cout << "Kilometers driven by vehicle 1: ";
  cout << vehicle1.get_kms() << endl;
  cout << "Kilometers driven by vehicle 2: ";
  cout << vehicle2.get_kms() << endl;
  cout << "Litres used by vehicle 1: ";
  cout << vehicle1.get_litresUsed() << endl;
  cout << "Litres used by vehicle 2: ";
  cout << vehicle2.get_litresUsed() << endl << endl;
  cout << "Reseting the odometers to 0" << endl;
  cout << "---------------------------" << endl;
  vehicle1.reset_kms();
  vehicle2.reset_kms();
  cout << "Kilometers driven by vehicle 1: ";
  cout << vehicle1.get_kms() << endl;
  cout << "Kilometers driven by vehicle 2: ";
  cout << vehicle2.get_kms() << endl;
  return 0;
}
Odometer::Odometer(double distDriven, double fuelEff)
{
  distanceDriven = distDriven;
  fuelEfficiency = fuelEff;
}
Odometer::Odometer() : distanceDriven(0), fuelEfficiency(0)
{
  //Body intentionally blank
}
Odometer::~Odometer()
{
  //empty
}
void Odometer::reset_kms()
{
  distanceDriven = 0;
}
void Odometer::set_fuelEfficiency(double fuelEff)
{
  fuelEfficiency = fuelEff;
}
void Odometer::add_totalKms(double total_Kms)
{
  distanceDriven += total_Kms;
}
double Odometer::get_litresUsed()
{
  return distanceDriven / fuelEfficiency;
}
double Odometer::get_kms() const
{
  return distanceDriven;
}
double Odometer::get_fuelEfficiency() const
{
  return fuelEfficiency;
}
