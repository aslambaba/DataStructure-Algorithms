#include <iostream>

using namespace std;

int main()
{
    char Vehicle;
    int days;
    
    cout<<"Please Select Your Vehicle"<<endl;
    cout<<"M = Motorcycle"<<endl;
    cout<<"C = Car"<<endl;
    cout<<"B = Bus"<<endl;
    
    cin >> Vehicle;
    
    cout<<"How many days you want to park your vehicle ?"<<endl;
    
    cin >> days;
    
    if(Vehicle == 'M'){
        int fee;
        fee = 10*days;
        cout << "Your Parking Charges for Motorcycle is: Rs."<<fee<<" for "<<days<<endl;
    }
    else if(Vehicle == 'C'){
        int fee;
        fee = 20*days;
        cout << "Your Parking Charges for Car is: Rs."<<fee<<" for "<<days<<" Days"<<endl;
    }
    else if(Vehicle == 'B'){
        int fee;
        fee = 30*days;
        cout << "Your Parking Charges for Bus is: Rs."<<fee<<" for "<<days<<endl;
    }
    else{
        cout<<"Please Enter the correct Vehicle from the menu. ";
    };
    
    return 0;
}
