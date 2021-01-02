#include <iostream>
#include <string>

using namespace std;

class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isFull()
    {
        if (top == 4)
            return true;
        else
            return false;
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }

    string push(int value){
        if(isFull()){
             cout<<"Your Stack is Full"<<endl;
        }
        else{
            top++;
            arr[top] = value;
            cout << arr[top] << "Added !!" <<endl;
        }
    }

    int pop(){
        if(isEmpty()){
             cout << "Your Stack is Empty" << endl;
        }
        else{
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }

    int peek(int position){
        if(position < 5){
            return arr[position];
        }
        else{
            return false;
        }
    }

    int count(){
        int countValue = top+1;
        return countValue;
    }

    int display(){
        cout << "The data in stack is" << endl;
       for (int i=4 ; i>=0 ; i--){
           cout << arr[i] << endl ;
       } 
    }

    int change(int position, int Newvalue){
        arr[position] = Newvalue;
        arr[position];
    }

};
int main()
{
    Stack s1;
    int Option , Value, Pos;
    do{
        
    cout << "What Operation do you want to perform in stack - Choose by number" << endl;
    cout << "1 - Check Your Stack is Full" << endl;
    cout << "2- Check Your Stack is Empty" << endl;
    cout << "3- Add Value in Stack" << endl;
    cout << "4- Pop Value from stack" << endl;
    cout << "5- Check Value in Perticular position in stack" << endl;
    cout << "6- Display all value in stack" << endl;
    cout << "7- Check How many value are in stack" << endl;
    cout << "8- Change value in stack" << endl;
    cout << "9- Clear Screen" << endl;

    cin >> Option;

    switch (Option)
    {
    case 0:
        break;
    case 1:
        cout <<s1.isFull() <<endl;
        break;
    case 2:
        cout<<s1.isEmpty()<<endl;
        break;
    case 3:
        cout<<"Enter Value That You want to add in Stack" <<endl;
        cin >> Value;
        cout<< s1.push(Value) <<endl;
        break;
    case 4:
        cout<<s1.pop()<<endl;
        break;
    case 5:
        cout << "Enter the Position of item you want to see" << endl;
        cin >> Pos;
        cout<<s1.peek(Pos)<<endl;
        break;
    case 6:
        cout<<s1.display()<<endl;
        break;
    case 7:
        cout<<s1.count()<<endl;
        break;
    case 8:
        cout<< "Enter the Value" <<endl;
        cin >> Value;
        cout<< "Enter the Position where you want to update this new value"<<endl;
        cin >> Pos;
        cout<<s1.change(Pos,Value)<<endl;
        break;
    case 9:
        system("cls");
        break;
    default:
        break;
    }

    }
    while(Option != 0);
    return 0;
};












