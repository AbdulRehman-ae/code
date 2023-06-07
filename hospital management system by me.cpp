#include <iostream>
#include <string>
using namespace std;
int main()
{
	int code;
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t_____________________________________________________ "<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t#####################################################"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t#                                                   #"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t#                                                   #"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t#        welcome to Hospital managemant system      #"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t#                                                   #"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t#                                                   #"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t#                                                   #"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t#                                      @aimaayesha  #"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t####################################################"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t_____________________________________________________"<<endl;
    system("pause");
   system("cls");
   
a:
    void login();
	{
	    cout<<"-------------------------------------------------";
        cout<<"\n\n\n\n\n\n\t\t\t\t***************************";
    	cout<<"\n\t\t\t\t   Enter The Code: ";
    	cin>>code;
    	
    	cout<<"\n\t-----------------------------------------------------";
    	if(code==1210)
    	{
    		cout<<"\nAcess Generated"<<endl;
		}
		if(code!=1210)
		{
			cout<<"\nYour code Is Incorrect";goto a;
		}
	
}
   system("pause");
   system("cls");


 int i;
  b:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                     |\n";
cout<<"\t\t\t\t\t\t|             1  >> Add New Patient Record                        |\n";
cout<<"\t\t\t\t\t\t|             2  >> For doctor's Appointment                      |\n";
cout<<"\t\t\t\t\t\t|             3  >> Full History of the Patient                   |\n";
cout<<"\t\t\t\t\t\t|             4  >> Information About the Hospital                |\n";
cout<<"\t\t\t\t\t\t|             5  >> Exit the Program                              |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
c:cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>i;
if(i>5||i<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto c;} //if inputed choice is other than given choice
system("cls");

string name,age,gen,add,num,dis;

if(i==1)

 {
 	cout<<"\nenter the name of the patient: ";
 	getline (cin >> ws , name);
 	cout<<"\nEnter The Age of the Patient: ";
 	getline (cin >> ws , age);
 	cout<<"\nEnter the Gender of the patient:  ";
 	getline (cin >> ws , gen);
 	cout<<"\nEnter the address: ";
 	getline (cin >> ws,add );
 	cout<<"\nContact number: ";
 	getline (cin >> ws,num);
 	cout<<"\nAny Major disease suffered earlier: ";
 	getline (cin >> ws , dis);goto b;
 }
 system("cls");
 int e;
  if(i==2)
 {
 	cout<<"\n\n\n ____________________________________________________";
 	cout<<"\n|                       Doctor  schedule                 |";
 	cout<<"\n|      Name                        |         Time        |";
 	cout<<"\n| 1:Dr Tariq Ali  (Cardiologist)   |        12:30 PM     |";
 	cout<<"\n| 2:Dr Tahir Mehmood (Psychiatrist)|        1;00 PM      |";
 	cout<<"\n| 3:Dr Bisma khan (neurologists)   |        1:50 PM      |";
 	cout<<"\n| 4:Dr Iqra Firdous(surgeon)       |        6:30 PM      |";
 	cout<<"\n|________________________________________________________|";
 }
 w:
 	cout<<"\nEnter any number: ";
 	cin>>e;
 	if(e<=0||e>=4)
	 {
 		cout<<"\nWrong Input";goto w;
 		
	 }
if(e<=4)
     {
 
    cout<<"\n _________________________________________________________";
    cout<<"\n|                                                         |";
    cout<<"\n|               Thank you For Appointment                 |";
    cout<<"\n|                                                         |";
    cout<<"\n|_________________________________________________________|";
    
  }
  system("pause"); 
  system("cls");
  goto b;
}
