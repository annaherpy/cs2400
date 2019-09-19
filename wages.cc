/*
 *        File: wages.cc
 *      Author: Anna Herpy
 *        Date: September 19, 2019
 * Description: Extra Credit
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    ///#1 Variable declaration
    double rate, hours, wages;

    ///#2 input hours and rate
    cout << "Enter the hourly rate: ";
    cin >> rate;
    cout << "Enter the number of hours: ";
    cin >> hours;

if (rate >=8 && rate <=20){

    cout << setw(29) <<"Rate: Valid" << endl;
    
} else {
     
     cout << setw(29) <<"Rate: Invalid" << endl;
     exit(0);
}

if (hours >=0 && rate <=60){

    cout << setw(29) <<"Hours: Valid" << endl;
    
} else {
     
     cout << setw(29) <<"Hours: Invalid" << endl;
     exit(0);
}


    ///#3 Calculate wages (overtime?)
    if (hours > 40)
    {
        double overtime = (hours - 40) * rate * 1.5;///overtime
        double regularPay = 40 * rate; ///regular
        wages = overtime + regularPay;
    } else {
        wages = hours * rate;
    }
    

    ///#
    cout << fixed << setprecision(2) << showpoint;
    cout << setw(25) << "Your hourly rate: $" << rate << endl;
    cout << setw(24) << "Hours worked: " << hours << endl;
    cout << setw(25) << "Weekly pay: $" << wages << endl;
    return 0;
}// main