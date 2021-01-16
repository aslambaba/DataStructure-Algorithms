#include <iostream>
using namespace std;
int main()
{
    int salary[11];
    string names[11];
    for(int i = 0; i<10 ; i++){
        cout<<"Please Enter "<<i+1<<" Employee Name"<<endl;
     cin >> names[i+1];
        cout<<"Enter "<<i+1<<" Employee Salary(PK)"<<endl;
        cin>> salary[i+1];
    }
    for(int j = 0; j<10 ; j++){
        if(salary[j+1]*12 >= 25000 ){
            cout<<"Dear, "<<names[j+1]<<" You have to pay taxes"<<endl;
        }
        else{
            cout<<names[j+1]<< " Not have to pay tax"<<endl;
        }
    }
    return 0;
}

Q3- Write a program that displays all values of the given array in the form of a matrix and finds its  sum:   array values are {{6,3},{7,8},{4,5}} hint : Declare 2-D array
Code:
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int MulArray[3][2] =    {
                                {6,3},
                                {7,8},
                                {4,5}
                            };
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Array[" << i << "][" << j << "] = " << MulArray[i][j] << endl;
            sum = sum + MulArray[i][j];
        }
    }
    cout<<"The Sum of all value are "<<sum<<endl;
    return 0;
}
