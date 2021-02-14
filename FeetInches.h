//*****************************************************************
// Written by Steven Smail for COP3331
//
// FeetInches.h (Project 6)
//
// This is the class file that contains the FeetInches class;
// including the Constructor, the Mutator functions, the Accessor
// functions, and Overloaded Operator functions for < > << and >>.
//*****************************************************************

#ifndef FEETINCHES_H
#define FEETINCHES_H

#include <iostream>
using namespace std;

// The FeetInches class holds distances or measurements 
// expressed in feet and inches.

class FeetInches
{
private:
  int feet;    // To hold a number of feet
  int inches;  // To hold a number of inches
public:
  // Constructor
  FeetInches(int f = 0, int i = 0)
  {
    feet = f;
    inches = i;
  }

  // Mutator functions
  void setFeet(int f)
  { feet = f; }

  void setInches(int i)
  { inches = i; }

  // Accessor functions
  int getFeet() const
  { return feet; }

  int getInches() const
  { return inches; }

//**********************************************
// Overloaded > operator
//**********************************************
  bool operator > (const FeetInches &right)
  {
    // Create boolean variable
    bool value;

    if(feet > right.feet)
      value = true;
    else if((feet == right.feet) && (inches > right.inches))
      value = true;
    else
      value = false;

    return value;
  }

//**********************************************
// Overloaded < operator
//**********************************************
  bool operator < (const FeetInches &right)
  {
    // Create boolean variable
    bool value;

    if(feet < right.feet)
      value = true;
    else if((feet == right.feet) && (inches < right.inches))
      value = true;
    else
      value = false;
    return value;
  }

//**********************************************
// Overloaded << operator
//**********************************************
  friend ostream& operator << (ostream& os, const FeetInches& fi)
  {
    os << fi.feet << " feet, " << fi.inches << " inches";
    return os;
  }

//**********************************************
// Overloaded >> operator
//**********************************************
  friend istream& operator >> (istream& is, FeetInches& fi)
  {
    char ch;

    is >> fi.feet;   //get the feet
    is >> ch;                   //read and discard the ','
    is >> fi.inches; //get the inches
    return is;
  }
};

#endif
