
/*
 Course: Applied Data Structures
 Student Name: Ismail ElDahshan
 Student ID: 900221719
 Professor: Dr. Amr Goneid
 Section: 2
 */
#include "stackt.h"
#include"implementation.cpp"
#include<iostream>
#include<cmath>
using namespace std;



void TowersOfHanoi(int N, Stackt<int>& source, Stackt<int>& aux, Stackt<int>& target, int& moveCount) {
    if (N == 1) {
        //if N=1 move disk 1 from Source to Target directly
        int disk;
        source.pop(disk);
        target.push(disk);
        moveCount++;//counter to count the number of moves
        cout<<"Move number: "<<moveCount<<endl;
        cout << "Move disk 1 from Peg " << source.getName() << " to Peg " << target.getName() << endl;//display where the disks move

        // conditions for each stack in order to display stack contents correctly after each move
        if(source.getName()=='A'){
            cout<<"Peg A contents are: ";
            source.display();
        }
        else if(aux.getName()=='A'){
            cout<<"Peg A contents are: ";
    aux.display();
        }
        else if(target.getName()=='A'){
            cout<<"Peg A contents are: ";
           target.display();
        }
        if(source.getName()=='B'){
            cout<<"Peg B contents are: ";
         source.display();
        }
        else if(aux.getName()=='B'){
            cout<<"Peg B contents are: ";
            aux.display();
        }
        else if(target.getName()=='B'){
            cout<<"Peg B contents are: ";
            target.display();
        }
       if(source.getName()=='C'){
            cout<<"Peg C contents are: ";
            source.display();
        }
        else if(aux.getName()=='C'){
            cout<<"Peg C contents are: ";
            aux.display();
        }
        else if(target.getName()=='C'){
            cout<<"Peg C contents are: ";
            target.display();
        }

    }

    else
    {
       // else Call Towers to move N-1 disks from Source to Aux via Target
        TowersOfHanoi(N - 1, source, target, aux, moveCount);

        //Move disk N from Source to Target directly
        int disk;
        source.pop(disk);
        target.push(disk);
        moveCount++;//counter to count the number of moves
        cout<<"Move number: "<<moveCount<<endl;
        cout << "Move disk " << N << " from Peg " << source.getName() << " to Peg " << target.getName() << endl;//display where the disks move

        // conditions for each stack in order to display stack contents correctly after each move
        if(source.getName()=='A'){
            cout<<"Peg A contents are: ";
            source.display();
        }
        else if(aux.getName()=='A'){
            cout<<"Peg A contents are: ";
            aux.display();
        }
        else if(target.getName()=='A'){
            cout<<"Peg A contents are: ";
            target.display();
        }
        if(source.getName()=='B'){
            cout<<"Peg B contents are: ";
            source.display();
        }
        else if(aux.getName()=='B'){
            cout<<"Peg B contents are: ";
            aux.display();
        }
        else if(target.getName()=='B'){
            cout<<"Peg B contents are: ";
            target.display();
        }
         if(source.getName()=='C'){
            cout<<"Peg C contents are: ";
            source.display();
        }
        else if(aux.getName()=='C'){
            cout<<"Peg C contents are: ";
            aux.display();
        }
        else if(target.getName()=='C'){
            cout<<"Peg C contents are: ";
            target.display();
        }
        //Call Towers to move N-1 disks from Aux to Target via Source
        TowersOfHanoi(N - 1, aux, source, target, moveCount);

    }
}



int main() {

    int N=0,disks=0, moves=0;
    cout<<"Please enter the number of disks you want in the towers of hanoi game ";
    cin>> N;//getting the number of disks

    //initializing each of three pegs
    Stackt<int> A(N,'A');
    Stackt<int> B(N,'B');
    Stackt<int> C(N,'C');

    cout<<"contents of all pegs at the beginning of the towers of hanoi is "<<" "<<endl;
    for(int i=0; i<N; i++){//loop to push disk contents into peg A
        disks=N-i;
        A.push(disks);
    }
   cout<<"Peg A contents are ";
    A.display();//displaying peg A

    cout<<"Peg B contents are ";
B.display();//displaying peg B

    cout<<"Peg C contents are ";
   C.display();//displaying peg C


    TowersOfHanoi(N,A,B,C,moves);//calling the towers of hanoi function
    cout<<"TOTAL MOVES ARE "<<moves<<endl;//displaying the amount of moves
    cout<<"Peg contents after Towers of Hanoi are "<<endl;
    cout<<"Peg A contents are ";
    A.display();//displaying peg A
    cout<<"Peg B contents are ";
 B.display();//displaying peg B
    cout<<"Peg C contents are ";
   C.display();//displaying peg C

//Displaying the End Of Universe Question
cout<<"THE END OF UNIVERSE QUESTION ANSWER IS 2^64 - 1 SECONDS WHICH IS "<<pow(2,64)-1<< " WHICH IN YEARS IS  "<<(pow(2,64)-1)/60/60/24/365<<endl;



    return 0;
}