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
