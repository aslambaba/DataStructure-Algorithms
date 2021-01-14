#include <iostream>
#include <cstring>
using namespace std;

int main()
{


    int a,b,c=1;
    
    for(a =2; a<=6 ; a++){
        
        for(b=1;b<=c;b++){
            cout<<a*b<<"\t";
        }
        c++;
        cout<<"\n";
    }
    
    return 0;
}
