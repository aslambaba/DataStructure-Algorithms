#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int basicSalary, grossSalary;
    cout<<"Enter basic salary : ";
    cin>>basicSalary;
    float da, hr;        //dearness allowance, house rent
    da = basicSalary * (35.0/100.0);
    hr = basicSalary * (25.0/100.0);
    grossSalary = basicSalary + da + hr;
    cout<<"Gorss Salary : "<<grossSalary<<endl;
    return 0;
}
