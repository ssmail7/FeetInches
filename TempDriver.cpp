//**************************************************************
// Written by Steven Smail for COP3331
//
// TempDriver.cpp (Project 6)
//
// This is the driver program that tests the FeetInches class
// with function templates and operator overloads.
//**************************************************************

#include <iostream>
#include <string>
#include "FeetInches.h"
using namespace std;

template <class T>
T minimum(T a, T b)
{
  if(a < b)
    return a;
  else
    return b;
}

template <class T>
T maximum(T a, T b)
{
  if(a > b)
    return a;
  else
    return b;
}

int main()
{
  int firstInt, secondInt;
  double firstDouble, secondDouble;
  string firstString, secondString;
  

  // User Integer Input
  cout << "Enter two integers: ";
  cin >> firstInt >> secondInt;
  // Minimum Integer Output
  cout << "The minimum of " << firstInt
       << " and " << secondInt << " is: "
       << minimum(firstInt, secondInt) << endl;
  // Maximum Integer Output
  cout << "The maximum of " << firstInt
       << " and " << secondInt << " is: "
       << maximum(firstInt, secondInt) << endl;

  // User Double Input
  cout << "Enter two floating point numbers: ";
  cin >> firstDouble >> secondDouble;
  // Minimum Double Output
  cout << "The minimum of " << firstDouble
       << " and " << secondDouble << " is: "
       << minimum(firstDouble, secondDouble) << endl;
  // Maximum Double Output
  cout << "The maximum of " << firstDouble
       << " and " << secondDouble << " is: "
       << maximum(firstDouble, secondDouble) << endl;

  // To skip the remaining '\n' character
  cin.ignore();

  // User String Input
  cout << "Enter the first string: ";
  getline(cin, firstString);
  cout << "Enter the second string: ";
  getline(cin, secondString);
  // Minimum String Output
  cout << "The minimum of " << firstString
       << " and " << secondString << " is: "
       << minimum(firstString, secondString) << endl;
  // Maximum String Output
  cout << "The maximum of " << firstString
       << " and " << secondString << " is: "
       << maximum(firstString, secondString) << endl;

  // Two FeetInches Objects
  FeetInches distance1;
  FeetInches distance2;

  // User Object Input
  cout << "Enter the first distance (in feet, inches format): ";
  cin >> distance1;
  cout << "Enter the second distance (in feet, inches format): ";
  cin >> distance2;
  // Minimum Object Output
  cout << "The minimum of " << distance1
       << " and " << distance2 << " is: "
       << minimum(distance1, distance2) << endl;
  // Maximum Object Output
  cout << "The maximum of " << distance1
       << " and " << distance2 << " is: "
       << maximum(distance1, distance2) << endl;
}
