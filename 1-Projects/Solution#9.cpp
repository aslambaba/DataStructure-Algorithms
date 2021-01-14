#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100];
    cout << "Enter the sentence" <<endl;
    cin.get(a, 100);
    
    int da = strlen(a);

    int i,word = 0,characters=0;
    for(i = 0 ; i< da ; i++){
        if(a[i] == ' '){
            word = word + 1;
        }
        else if(a[i] == '.'){
            break;
        }
        else{
            characters = characters + 1;
        }
    }
    word = word + 1;
    cout<<"The characters in this sentence is: "<<characters<<endl;
    cout << "The words in this sentence is: "<<word<<endl;
    return 0;
}
