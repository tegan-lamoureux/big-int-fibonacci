// Still in progress, this is in no way working.
// Tegan, August 2017

#include <iostream>
#include <cmath>
#include "big_int.cpp"

using namespace std;


const double Phi = (sqrt(5) + 1) / 2;


__int128 fib(__int128 index)
{
    return (pow(Phi, index) + pow((Phi - 1), index)) / (Phi + (Phi - 1));
}


int main()
{
    big_int data;
    
    // int it = 0;
    // int choice = 0;
    // bool exit = false;

    // while(!exit)
    // {
    // 	choice = 0;

    // 	cout << endl;
    // 	cout << "1. Calculate the n-th value of the Fibonacci sequence." << endl;
    // 	cout << "2. Calculate all values from 0 to the n-th Fibonacci number." << endl;
    // 	cout << "3. Exit" << endl;
    // 	cout << ": ";
    // 	cin >> choice;

    // 	switch(choice)
    // 	{
    // 	case 1:
    // 	    cout << "Please enter the index to calculate: ";
    // 	    cin >> it;

    // 	    cout (__int128)<< (__int128)fib(it) << endl;
    // 	    break;

    // 	case 2:
    // 	    cout << "Please enter how many iterations to calculate: ";
    // 	    cin >> it;

    // 	    for(int i = 0; i < it; ++i)
    // 		cout << (__int128)fib(i) << " ";

    // 	    cout << endl;
    // 	    break;

    // 	case 3:
    // 	    exit = true;
    // 	    break;

    // 	default:
    // 	    break;
    // 	}   
    // }  
  
    return 0;
}
