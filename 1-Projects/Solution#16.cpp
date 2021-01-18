#include <iostream>

using namespace std;

/* Arthematic Operation Funtions */

void Add(int a,int b){
    cout<<"The Addition of Numbers are: "<<a+b<<endl;
}
void Subtract(int a,int b){
    cout<<"The Subtraction of Numbers are: "<<a-b<<endl;
}
void Multiple(int a,int b){
    cout<<"The Multiplication of Numbers are: "<<a*b<<endl;
}
void Modulus(int a,int b){
    cout<<"The Modulus of Numbers are: "<<a%b<<endl;
}
void Divide(int a,int b){
    cout<<"The Divition of Numbers are: "<<a/b<<endl;
}

int main()
{
    int firstNumb, SecNumb;
    char Operator;
    
    cout<<"Welcome to Aslam's Caluculator"<<endl;
    cout<<"Please Enter Your 1st Number"<<endl;
    cin >> firstNumb;
    cout<<"Please Enter Your 2nd Number"<<endl;
    cin >> SecNumb;
    
    cout<<"Please Enter The Operation You want to operate.(i.e =,-,*,%"<<endl;
    cin>> Operator;
    
    switch(Operator){
        case '+':
            Add(firstNumb,SecNumb);
            break;
        case '-':
            Subtract(firstNumb,SecNumb);
            break;
        case '*':
            Multiple(firstNumb,SecNumb);
            break;
        case '%':
            Modulus(firstNumb,SecNumb);
            break;
        case '/':
            Divide(firstNumb,SecNumb);
            break;
        default:
            break;
    }
    return 0;
}
