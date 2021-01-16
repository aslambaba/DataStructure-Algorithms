#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rollNumber[6];
    int marks[6];
    for(int i=1; i<=5; i++){
        cout<<"Please Enter Student Roll Number: ";
        cin >> rollNumber[i] ;
        cout<<"Please Enter Marks of ";
        cin >> marks[i];
    }
    int n = sizeof(marks) / sizeof(marks[0]);
    sort(marks, marks + n, greater<int>());
    cout<<"----------------------------"<<endl;
    cout<<"Roll Number \t Marks"<<endl;
    cout<<"----------------------------"<<endl;
    for(int a = 1; a<=5 ; a++){
        cout<<rollNumber[a]<<" \t \t"<<marks[a]<<endl;
    }
    return 0;
}
