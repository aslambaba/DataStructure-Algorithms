#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a five digit number : ";
    cin>>n;
    int a, b, c, d, e, sum=0;
    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n % 10;
    n = n / 10;
    d = n % 10;
    n = n / 10;
    e = n % 10;
    sum = a + b + c + d + e;
    cout<<"Sum of "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" is : "<<sum<<endl;
    return 0;
}
