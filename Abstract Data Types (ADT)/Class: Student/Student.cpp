#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string studName, int idNum,
int studNum, string dipName, double aveMark)
{
  studentName = studName;
  idNumber = idNum;
  studentNumber = studNum;
  diplomaName = dipName;
  averageMark = aveMark;
}
Student::Student(string studName, int idNum, int studNum, string dipName)
{
  studentName = studName;
  idNumber = idNum;
  studentNumber = studNum;
  diplomaName = dipName;
}
Student::Student()
{
  studentName = " ";
  idNumber = 0;
  studentNumber = 0;
  diplomaName = " ";
  averageMark = 0;
  for (int i = 0; i < SIZE; i++)
    results[i] = 0;
  for (int i = 0; i < SIZE; i++)
    moduleCode[i] = ' ';
}
Student::~Student()
{
  cout << "Bye!" << endl;
}
int Student::calcAverage(int marks)
{
  int total = 0;
  for (int i = 0; i < SIZE; i++)
    total += results[i];
  return(averageMark = total / SIZE);
}
bool Student::pass() const
{
  return (averageMark > 50);
}
void Student::displayResults()
{
  cout << "Name: " << studentName << endl;
  cout << "Student Number: " << studentNumber << endl;
  cout << "Diploma: " << diplomaName << endl;
  cout << "Average mark: " << averageMark << endl;
  cout << "Results per module: " << endl;
  if (diplomaName == "Garden Design")
  {
    for (int i = 0; i < SIZE; i++)
      cout << "G" << i+1 << ":" << results[i] << endl;
  }
  if (diplomaName == "Gourmet Cooking")
    for (int i = 0; i < SIZE; i++)
    {
      cout << "C" << i+1 << ":" << results[i] << endl;
    }
  cout << "Status: ";
  if (pass())
    cout << "Passed" << endl;
  else
    cout << "Failed" << endl;
}
string Student::getStudentName() const
{
  return studentName;
}
int Student::getIdNumber() const
{
  return idNumber;
}
int Student::getStudentNumber() const
{
  return studentNumber;
}
string Student::getDiplomaName() const
{
  return diplomaName;
}
double Student::getAverageMark() const
{
  return averageMark;
}
char Student::getModuleCode() const
{
  return moduleCode[SIZE];
}
int Student::getResults() const
{
  for (int i = 0; i < SIZE; i++)
    cout << results[i] << " ";
  return (results[SIZE]);
}
void Student::setStudentName(string studName)
{
  studentName = studName;
}
void Student::setIdNumber(int idNum)
{
  idNumber = idNum;
}
void Student::setStudentNumber(int studNum)
{
  studentNumber = studNum;
}
void Student::setDiplomaName(string dipName, char modCode)
{
  int i;
  for (int i = 0; i < SIZE; i++)
  {
    cin >> moduleCode[i];
  }
  moduleCode[SIZE] = modCode;
  diplomaName = dipName;
}
void Student::setResults(int moduleMarks)
{
  for (int i = 0; i < moduleMarks; i++)
  {
    cin >> results[i];
  }
}
void Student::setAverageMark(double aveMark)
{
  averageMark = aveMark;
}
ostream& operator<<(ostream& outs, const Student& students)
{
  outs << "Name: " << students.studentName << endl;
  outs << "Student Number: " << students.studentNumber << endl;
  outs << "Diploma: " << students.diplomaName << endl;
  outs << "Average mark: " << students.averageMark << endl;
  outs << "Results per module: " << endl;
  if (students.diplomaName == "Garden Design")
  {
    for (int i = 0; i < SIZE; i++)
      outs << "G" << i+1 << ":" << students.results[i] << endl;
  }
  if (students.diplomaName == "Gourmet Cooking")
    for (int i = 0; i < SIZE; i++)
    {
      outs << "C" << i+1 << ":" << students.results[i] << endl;
    }
  outs << "Status: ";
  if (students.pass())
    outs << "Passed" << endl;
  else
    outs << "Failed" << endl;
  return outs;
}
