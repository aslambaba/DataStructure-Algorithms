#include <iostream>

using namespace std;

int main()
{
    int number, result, i;
    cout<<"Enter a Five Digit Number"<<endl;
    cin>> number;
    
    while (number > 0){
        int digit = number%10;
        number /= 10;
        cout<<digit<<endl;
    }
    return 0;
}
