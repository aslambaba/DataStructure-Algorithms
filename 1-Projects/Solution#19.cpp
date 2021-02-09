#include <iostream>

using namespace std;
class Book{
	public:
   	 
    	int page,price;
    	string title;
   	 
    	Book(string a,int b,int c){
        	title = a;
        	price = b;
        	page = c;
    	}
    	void input(){
        	cout<<"You are in Input Method"<<endl;
    	}
    	void display(){
        	cout<<"The Price of Books is: "<< price <<endl;
    	}
   	 
};
int main()
{
    
	Book CompoundEffect("The Compound Effect",100,500);
    
	CompoundEffect.input();
	CompoundEffect.display();
    
	Book TGR("Think And Grow Rich",50,150);
    
	TGR.input();
	TGR.display();
    
	Book EPL("Eat Pray Love",80,400);
    
	EPL.input();
	EPL.display();
    
	return 0;
}
