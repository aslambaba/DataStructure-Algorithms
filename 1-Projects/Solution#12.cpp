#include <iostream>

using namespace std;

int main()
{
    int option, customerID = 0;
    int amount;
    int customers[1000];
    int mangoes[1000], bananna[1000], orange[1000];
    
  
        do
        {
            cout<<"Please Select Anyone of these"<<endl;
            cout<<"1- Create a new bill"<<endl;
            cout<<"2- See the Sales Records"<<endl;
            cout<<"3- See Bills of perticular customers"<<endl;
            cin >> option;
            
            switch(option)
            {
                case 1:
                    cout<<"Please Enter the amount of Mangoes: "<<endl;
                    cin >> amount;
                    mangoes[customerID] = amount;
                    
                    cout<<"Please Enter the amount of Orange: "<<endl;
                    cin >> amount;
                    orange[customerID] = amount;
                    
                    cout<<"Please Enter the amount of Banannas: "<<endl;
                    cin >> amount;
                    bananna[customerID] = amount;
                    
                    customers[customerID] = customerID;
                    
                    cout<<customers<<endl;
                    
                    customerID = customerID + 1;
    
                    break;
                
                case 2:
                    cout<<"----------------------------------------------------"<<endl;
                    cout<<"Customer ID \t Mangoes \t Orages \t Banannas \t TotalBill"<<endl;
                    cout<<"----------------------------------------------------"<<endl;
                    
                    
                    for(int i=0; i<=(customerID-1); i++){
                        cout<<customers[i]<<" \t \t "<<mangoes[i];
                        cout<<" \t \t "<<orange[i];
                        cout<<" \t \t "<<bananna[i];
                        cout<<" \t \t "<<"Rs."<<(orange[i]*10)+(mangoes[i]*20)+(bananna[i]*5)<<endl;

                    }
                    break;
                case 3:
                
                    int cid;
                    cout<<"Please Enter Your Customer ID"<<endl;
                    cin >> cid;
                    
                    cout<<"----------------------------------------------------"<<endl;
                    cout<<"Customer ID \t Mangoes \t Orages \t Banannas \t TotalBill"<<endl;
                    cout<<"----------------------------------------------------"<<endl;
                    
                    cout<<customers[cid]<<" \t \t "<<mangoes[cid];
                    cout<<" \t \t "<<orange[cid];
                    cout<<" \t \t "<<bananna[cid];
                    cout<<" \t \t "<<"Rs."<<(orange[cid]*10)+(mangoes[cid]*20)+(bananna[cid]*5)<<endl;
                    break;
            }    
        }
        while(option != 0);
    return 0;
}
