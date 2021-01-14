#include <iostream>

using namespace std;

int main()
{
    char Vehicle;
    int Salary;
    
    cout<<"Please Enter Your Salary in Pak Rupees: "<<endl;
    
    cin >> Salary;
    
    
    if(Salary > 30000){
        int tax = Salary*0.2;
        cout <<"Total Salary: Rs."<<Salary<<endl;
        cout<<"Income Tax Deducted: Rs."<<tax<<endl;
        cout<<"Net Salary: Rs."<<Salary-tax<<endl;
    }
    else if(Salary > 20000){
        int tax = Salary*0.15;
        cout <<"Total Salary: Rs."<<Salary<<endl;
        cout<<"Income Tax Deducted: Rs."<<tax<<endl;
        cout<<"Net Salary: Rs."<<Salary-tax<<endl;
    }
    else if(Vehicle < 20000){
        int tax = Salary*0.1;
        cout <<"Total Salary: Rs."<<Salary<<endl;
        cout<<"Income Tax Deducted: Rs."<<tax<<endl;
        cout<<"Net Salary: Rs."<<Salary-tax<<endl;
    }
    else{
        cout<<"Please Enter the correct Amount!!";
    };
    
    return 0;
}
