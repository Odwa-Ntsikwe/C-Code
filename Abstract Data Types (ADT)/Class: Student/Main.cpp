#include <iostream>
#include "Student.h"
#include <fstream>

using namespace std;

int main()
{
  const int CLASS_SIZE = 5;
  Student students[CLASS_SIZE] = {Student("John Martin", 78120189, 12345, "Garden Design"),
  Student("Busi Molefe", 81011201, 23456, "Gourmet Cooking"),
  Student("Sean Naidoo", 69812018, 34567, "Garden Design")};
  char modCode;
  string dipName;
  int marks = 5;
  double ave;
  cout << "Student name: ";
  cout << students[0].getStudentName() << endl;
  cout << "Student ID: ";
  cout << students[0].getIdNumber() << endl;
  cout << "Student number: ";
  cout << students[0].getStudentNumber() << endl;
  cout << "Diploma name: ";
  cout << students[0].getDiplomaName() << endl;
  cout << "Enter module results (5): ";
  students[0].setResults(marks);
  students[0].calcAverage(ave);
  students[0].getAverageMark();
  cout << "===================" << endl;
  cout << "Student name: ";
  cout << students[1].getStudentName() << endl;
  cout << "Student ID: ";
  cout << students[1].getIdNumber() << endl;
  cout << "Student number: ";
  cout << students[1].getStudentNumber() << endl;
  cout << "Diploma name: ";
  cout << students[1].getDiplomaName() << endl;
  cout << "Enter module results (5): ";
  students[1].setResults(marks);
  students[1].calcAverage(ave);
  students[1].getAverageMark();
  cout << "===================" << endl;
  cout << "Student name: ";
  cout << students[2].getStudentName() << endl;
  cout << "Student ID: ";
  cout << students[2].getIdNumber() << endl;
  cout << "Student number: ";
  cout << students[2].getStudentNumber() << endl;
  cout << "Diploma name: ";
  cout << students[2].getDiplomaName() << endl;
  cout << "Enter module results (5): ";
  students[2].setResults(marks);
  students[2].calcAverage(ave);
  students[2].getAverageMark();
  cout << "===================" << endl;
  students[0].displayResults();
  cout << endl;
  students[1].displayResults();
  cout << endl;
  students[2].displayResults();
  cout << endl;
  ofstream outs;
  outs.open("RegisteredStudentResults.dat");
  if (outs.fail())
  {
    cout << "Error opening file RegisteredStudentResults.dat";
    exit(1);
  }
  outs << students[0] << endl;
  outs << students[1] << endl;
  outs << students[2] << endl;
  outs.close();
  return 0;
}
