#include <iostream>

using namespace std;


bool status(bool a){
    if(a == true){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int RollNumber[11];
    int search=0,option;
    bool recordFound;
    
    for(int d = 1 ; d<=10; d++){
        RollNumber[d] = 0;
    }
    do{
        recordFound = false;
        cout<<"Selete any one option: "<<endl;
        cout<<"1- Enter Students in Classroom"<<endl;
        cout<<"2- Find Student in Classroom"<<endl;
        cout<<"3- See the Students in Classroom"<<endl;
        cin >> option;
        
        switch(option){
            case 1:
                cout<<"BSCS 3rd Semester Classroom"<<endl;
                cout<<"Enter 10 students Roll Numbers"<<endl;
                
                for(int i = 1 ; i<=10; i++){
                    cout << "Please Enter the Roll Number of "<<i<<" Student"<<endl;
                    cin >> RollNumber[i];
                }
                break;
            case 2:
                cout<<"Enter the Roll Number of student that you want to find in class"<<endl;
                cin >> search;
                cout<<search<<endl;
                
                for(int a = 1 ; a<=10 ; a++){
                    if(search == RollNumber[a]){
                        cout<<"Record Found"<<endl;
                        recordFound = true;        
                    }
                }
                
                cout<<"Record Found: "<<status(recordFound)<<endl;
                break;
            case 3:
                for(int b = 1 ; b<=10; b++){
                    cout<<RollNumber[b]<<endl;
                }
                
                break;
        }
    }
    while(option != 0);
    
    return 0;
}
