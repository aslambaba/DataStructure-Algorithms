#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int factorial = 1;

    for(int a=1;a<=7;a++){
        
        for(int i = 1; i <=a; i++){
            factorial = factorial*i;
        }
        cout<<a<<"/"<<factorial<<" + ";
        factorial = 1;
    }
    
    return 0;
}
