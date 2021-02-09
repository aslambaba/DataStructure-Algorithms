#include <iostream>

using namespace std;

int
main ()
{
	int option;
	string name[10], disease[10], docter[10];
	int age[10], diseaseNumb, docterNumb;
	do{
     	 
      	cout << "Welcome to Aslam Hosital" << endl;
      	cout << "1) Register as a Patient" << endl;
      	cout << "99) Admin Panel" << endl;
      	cin >> option;
   	 
   	 
      	if(option == 1){
              	for (int i = 1; i < 3; i++){
   		       	cout << "Please Enter"<<i<<" Patient Name: ";
           		   cin >> name[i];
           		   cout << "Please Enter"<<i<<" Patient Age: ";
           		   cin >> age[i];
           		   cout << "What kind of disease"<<i<<" Patient Have:"<<endl;
           		   cout << "1) Fever" << endl;
           		   cout << "2) Typhiod" << endl;
           		   cout << "3) Dangue" << endl;
           		   cin >> diseaseNumb;
           		   switch (diseaseNumb){
           		 	case 1:
           		   	disease[i] = "Fever";
           		   	break;
           		 	case 2:
           		   	disease[i] = "Typhiod";
           		   	break;
           		 	case 3:
           		   	disease[i] = "Dangue";
           		   	break;
           		 	default:
           		   	cout << "Please Select a correct disease" << endl;
           		 	}
           		   cout << "Select Your Docter" << endl;
           		   cout << "1) Docter A" << endl;
           		   cout << "2) Docter Br" << endl;
           		   cin >> docterNumb;
           		   switch (docterNumb){
           		 	case 1:
           		   	docter[i] = "Docter A";
           		   	break;
           		 	case 2:
           		   	docter[i] = "Docter B";
           		   	break;
           		 	default:
           		   	cout << "Please Select a correct docter" << endl;
           		 	};
   			}
   	 
      	}
      	else if(option == 99){
          	int optiona;
          	cout<<"Welcome to Admin Panel"<<endl;
          	cout<<"1) Search Patients By Disease"<<endl;
          	cout<<"2) Search Patients By Docter"<<endl;
          	cin>>optiona;
          	if(optiona == 1){
                	int optiond;
                	cout << "What kind of disease"<<endl;
   		     	cout << "1) Fever" << endl;
   		     	cout << "2) Typhiod" << endl;
   		     	cout << "3) Dangue" << endl;  
   		     	cin>>optiond;
   		    	 
   		     	if(optiond == 1){
   		         	int patientcounter = 0;
   		         	for(int fd=1;fd<11;fd++){
   		             	cout<<disease[fd]<<endl;
   		             	if(disease[fd]=="Fever"){
   		                 	patientcounter++;
   		             	}
   		         	}
   		         	cout<<"Total Fever Patients are: "<<patientcounter<<endl;
   		        	 
   		         	cout<<"Patient Details Are: "<<endl;
   		         	for(int a=1;a<11;a++){
   		             	if(disease[a]=="Fever"){
   		                 	cout<<"Patient Name: "<<name[a]<<endl;
   		                 	cout<<"Patient Age: "<<age[a]<<endl;
   		                 	cout<<"Patient Disease: "<<disease[a]<<endl;
   		                 	cout<<"\n"<<endl;
   		             	}
   		         	}
   		     	}
   		     	else if(optiond == 2){
   		         	int patientcounter = 0;
   		         	for(int fd=1;fd<11;fd++){
   		             	cout<<disease[fd]<<endl;
   		             	if(disease[fd]=="Typhiod"){
   		                 	patientcounter++;
   		             	}
   		         	}
   		         	cout<<"Total Typhiod Patients are: "<<patientcounter<<endl;
   		         	cout<<"Patient Details Are: "<<endl;
   		         	for(int a=1;a<11;a++){
   		             	if(disease[a]=="Typhiod"){
   		                 	cout<<"Patient Name: "<<name[a]<<endl;
   		                 	cout<<"Patient Age: "<<age[a]<<endl;
   		                 	cout<<"Patient Disease: "<<disease[a]<<endl;
   		                 	cout<<"\n"<<endl;
   		             	}
   		         	}
   		     	}
   		     	else if(optiond == 3){
   		         	int patientcounter = 0;
   		         	for(int fd=1;fd<11;fd++){
   		             	cout<<disease[fd]<<endl;
   		             	if(disease[fd]=="Dangue"){
   		                 	patientcounter++;
   		             	}
   		         	}
   		         	cout<<"Total Dangue Patients are: "<<patientcounter<<endl;
   		        	 
   		        	 
   		                 	cout<<"Patient Details Are: "<<endl;
   		         	for(int a=1;a<11;a++){
   		             	if(disease[a]=="Dangue"){
   		                 	cout<<"Patient Name: "<<name[a]<<endl;
   		                 	cout<<"Patient Age: "<<age[a]<<endl;
   		                 	cout<<"Patient Disease: "<<disease[a]<<endl;
   		                 	cout<<"\n"<<endl;
   		             	}
   		         	}
   		     	}
   		     	else{
   		         	cout<<"Please Select the correct disease"<<endl;
   		     	}
   		    
          	}
          	else if(optiona == 2){
              	int optiond;
                	cout << "Select the Docter"<<endl;
   		     	cout << "1) Docter A" << endl;
   		     	cout << "2) Docter B" << endl;
   		     	cin>>optiond;
   		    	 
   		     	if(optiond == 1){
   		         	int docterCounter = 0;
   		         	for(int da=1;da<11;da++){
   		             	if(docter[da]=="Docter A"){
   		                 	docterCounter++;
   		             	}
   		         	}
   		         	cout<<"Total Docter A Patients are: "<<docterCounter<<endl;
   		         	cout<<"Patient Details Are: "<<endl;
   		         	for(int da=1;da<11;da++){
   		             	if(docter[da]=="Docter A"){
   		                 	cout<<"Patient Name: "<<name[da]<<endl;
   		                 	cout<<"Patient Age: "<<age[da]<<endl;
   		                 	cout<<"Patient Disease: "<<disease[da]<<endl;
   		                 	cout<<"\n"<<endl;
   		             	}
   		         	}
   		     	}
   		     	else if(optiond == 2){
   		         	int docterCounter = 0;
   		         	for(int da=1;da<11;da++){
   		             	if(docter[da]=="Docter B"){
   		                 	docterCounter++;
   		             	}
   		         	}
   		         	cout<<"Total Docter B Patients are: "<<docterCounter<<endl;
   		        	 
   		                 	cout<<"Patient Details Are: "<<endl;
   		         	for(int da=1;da<11;da++){
   		             	if(docter[da]=="Docter B"){
   		                 	cout<<"Patient Name: "<<name[da]<<endl;
   		                 	cout<<"Patient Age: "<<age[da]<<endl;
   		                 	cout<<"Patient Disease: "<<disease[da]<<endl;
   		                 	cout<<"\n"<<endl;
   		             	}
   		         	}
   		     	}
   		     	else{
   		         	cout<<"Please Select the right Docter"<<endl;
   		     	}
          	}
         	 
         	 
      	}
      	else{
          	cout<<"Please Select the rigtht option"<<endl;
      	}
	}
	while(option!=0);
 

 
  return 0;
}
