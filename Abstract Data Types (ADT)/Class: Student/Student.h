#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

class Student
{
public:
  Student(string studName, int idNum, int studNum, string dipName, double aveMark);
  Student(string studName, int idNum, int studNum, string dipName);
  Student();
  ~Student();
  int calcAverage(int marks);
  bool pass() const;
  void displayResults();
  string getStudentName()const;
  int getIdNumber()const;
  int getStudentNumber()const;
  string getDiplomaName()const;
  double getAverageMark()const;
  char getModuleCode()const;
  int getResults()const;
  void setStudentName(string studName);
  void setIdNumber(int idNum);
  void setStudentNumber(int studNum);
  void setDiplomaName(string diplomaName, char modCode);
  void setAverageMark(double aveMark);
  void setResults(int moduleMark);
  friend ostream& operator<<(ostream& outs, const Student& students);
private:
  string studentName;
  int idNumber;
  int studentNumber;
  string diplomaName;
  double averageMark;
  char moduleCode[SIZE];
  int results[SIZE];
};
#endif // STUDENT_H
