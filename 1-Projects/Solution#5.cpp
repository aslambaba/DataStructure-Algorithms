#include <iostream>

using namespace std;

int main()
{
    string conversion;
    int value;
    
    cout<<"Please Enter Value You Want to Convert "<<endl;
    
    cin >> value;
    
    cout<<"Enter the Type of Conversion (ie. inch,mile,gallon,pound)"<<endl;
    cin >> conversion;
    
    if(conversion == "inch"){
        int result;
        result = value*2.54;
        cout <<value<<" inches converted into: "<<result<<" centimeters"<<endl;
    }
    else if(conversion == "mile"){
        int result;
        result = value*1.609;
        cout <<value<<" miles converted into: "<<result<<" kilometers"<<endl;
    }
    else if(conversion == "gallon"){
        int result;
        result = value*3.785;
        cout <<value<<" gallon converted into: "<<result<<" liters"<<endl;
    }
    else if(conversion == "pound"){
        int result;
        result = value/2.205;
        cout <<value<<" pound converted into: "<<result<<" kilogram"<<endl;
    }
    else{
        cout<<"Please Enter the correct conversion type!!";
    };
    
    return 0;
}
