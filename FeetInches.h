//****************************************************************
// Written by Steven Smail for COP3331
//
// FeetInches.h (Project 6)
//
// This is the class file that contains the FeetInches class;
// including the Constructor, the Mutator functions, the Accessor
// functions, and Overloaded Operator functions for < > << and >>.
//****************************************************************

#ifndef FEETINCHES_H
    feet = f;
// Overloaded > operator
//**********************************************
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
// Overloaded < operator
//**********************************************
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
  {
  }

//**********************************************
// Overloaded >> operator
//**********************************************
  {

    is >> fi.inches; //get the inches
    return is;
  }