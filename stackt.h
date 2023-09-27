
/*
 Course: Applied Data Structures
 Student Name: Ismail ElDahshan
 Student ID: 900221719
 Professor: Dr. Amr Goneid
 Section: 2
 */
#ifndef stackt_h
#define stackt_h
#include<iostream>
using namespace std;
template <class Type>

class Stackt
{
public:
    Stackt (int size,char sname);// constructor that initiallizes all varriables in the stack
    void push(Type v );// push function that pushes elements onto the stack
    void pop(Type &v);// pop function that pops elements out of the staxk
    void stackTop(Type &v) const; // retrieve top function that retrieves the top elemnet on the stack
    bool stackIsEmpty() const; // checks if stack is empty
    bool stackIsFull() const; // checks if stack is full
    char getName ()const;//function to return the peg name
    void display();//function to display the stack
private:
    Type *arr;// dynamic pointer that will be used for the dynamic staxk array
    int top, MaxSize;// top index and maxsize of the stack array
    char name;//variable for the character of the peg
};
#endif /* stackt_h */
