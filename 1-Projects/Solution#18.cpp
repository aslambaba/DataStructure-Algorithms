#include <iostream>

using namespace std;

struct cricketer{
	string playerName;
	int runs;
	int innings;
	int timesNotOut;
    
}c[6];

int main()
{
	int counter=0,winner;
	cout<<"Welcome to Aslam Cricket Board"<<endl;
   cout<<endl;
	for(int a=1; a<6; a++){
    	cout<<"Enter the "<<a<<" Cricketer Name ";
    	cin>>c[a].playerName;
   	 
    	cout<<"Enter Cricketer Runs ";
    	cin>>c[a].runs;
   	 
    	cout<<"Enter Cricketer Innings ";
    	cin>>c[a].innings;
   	 
    	cout<<"Enter How many times cricketer not out: ";
    	cin>>c[a].timesNotOut;
    	cout << endl;
	}
    
	for(int b=1;b<6; b++){
    	if(counter<c[b].runs){
        	counter = c[b].runs;
        	winner = b;
    	}
	}
    
	cout<<" Our Highest Run Cricketer "<<endl;
	cout<<endl;
	cout<<"Name: "<<c[winner].playerName<<endl;
	cout<<"Runs: "<<c[winner].runs<<endl;
	cout<<"Innings: "<<c[winner].innings<<endl;
	cout<<"How Much time "<<c[winner].playerName<<" not out: "<<c[winner].timesNotOut<<endl;
    
	return 0;
}
