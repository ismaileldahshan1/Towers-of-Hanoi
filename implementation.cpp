
/*
 Course: Applied Data Structures
 Student Name: Ismail ElDahshan
 Student ID: 900221719
 Professor: Dr. Amr Goneid
 Section: 2
 */
#include "stackt.h"

template <class Type>
Stackt <Type> :: Stackt(int size,char sname)
{

    MaxSize = size;// sets maxsize to the size
    arr = new Type[MaxSize];//creates 1d dynamic stack array
    top = -1;//sets top to be -1
name=sname;

}

template <class Type>
void Stackt<Type>::display()//function to display the stack
{
    if(!stackIsEmpty())//if it stack is not empty then loop through the entire stack array and display its contents
    {
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<' ';//display stack contents
        }
        cout<<endl;
    }
    else
    {
        cout<<" empty"<<endl;//else display stack is empty
    }
}

template <class Type>
void Stackt<Type>::push(Type v)
{
    if(stackIsFull())
        cout << "Stack Overflow";//checks if stack is full
    else
        arr[++top] = v;// if not push elements in stack
}

template <class Type>
void Stackt<Type>::pop(Type &v)
{
    if(stackIsEmpty())
        cout << "Stack Underflow";//chcecks if stack is empty
    else
        v = arr[top--];// if not remove elemets from stack
}

template <class Type>
void Stackt<Type>::stackTop(Type &v) const
{
    if(stackIsEmpty())
        cout << "Stack Underflow";//checks if stack is empty
    else
        v = arr[top];// else make the variable be = to the top of the stack
}

template <class Type>
bool Stackt<Type>::stackIsEmpty() const
{
    return (top ==-1);// if the stack is empty top will be = -1

}

template <class Type>
bool Stackt<Type>::stackIsFull() const
{
    return (top ==(MaxSize-1));// if stack is full stack will be = maxsize-1

}
template <class Type>
char Stackt<Type>::getName() const //function to return the name of the peg
{
    return name; //returns the peg name
}



