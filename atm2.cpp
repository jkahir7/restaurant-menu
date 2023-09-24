#include<iostream>
#include <ctime>
using namespace std;

class atm
{
	
	public:
		
		atm()
		{
			
	     		cout<<"----------welcome to atm---------- "<<endl;
	     		cout<<" "<<endl;
	     		cout<<"       -------------------"<<endl;
                 time_t now = time(0);

                 char* date_time = ctime(&now);

                 cout << "The current date : " << date_time << endl;
	     		cout<<"        -------------------"<<endl;

                 int num;
 
       			 cout<<"press 1 and then press enter to access your account via pin no "<<endl;

      			  cout<<"        or      "<<endl;
      			  cout<<"press 0 and enter to get help."<<endl;
      			  cin>>num;
        
        	     		cout<<" "<<endl;
	     				cout<<" "<<endl;
	     				cout<<" "<<endl;

       			 if(num==1)
      			 {
        			int pin;
        			cout<<"----------atm account access----------"<<endl;
        				     		cout<<" "<<endl;

        			cout<<"enter your acc pin access number! [onaly one attempt allowed]"<<endl;
        			cin>>pin;
        			
        				if(pin == 1234)
        					{
        						cout<<"--------atm main menu screen--------"<<endl;
        						
        						int num;
        			     		cout<<" "<<endl;

        						cout<<"enter [1] to deposit cash"<<endl;
        						cout<<"enter [2] to withdraw cash"<<endl;
        			       		cout<<"enter [3] to balance inquiry"<<endl;
        						cout<<"enter [0] to to exit atm "<<endl;
				     	    	cout<<" "<<endl;

			        cout<<"please enter a selection and press return key :"<<endl;
			        cin>>num;
			        
			             if(num==1)
			             {
			             	cout<<"----------Atm account deposite system------------"<<endl;
			             	
			             		     		cout<<" "<<endl;
   								     		cout<<" "<<endl;

			             	cout<<"the name of the account holder are : rakesh kharva"<<endl;
			             	cout<<"the account holders' address is :mumbai "<<endl;
			             	cout<<"the branch location is :andheri"<<endl;
			             	cout<<"account number :5678"<<endl;
			             	int bal=20000;
			             	cout<<"------------------------------------"<<endl;
			             	cout<<"present available balance :"<<bal<<endl;
			             	int rs;
			             	
			             	cout<<"enter the amount to be deposited : "<<endl;
			             	cin>>rs;
			             	cout<<"your new available balanced amount is rs : "<<rs+bal<<endl;
			             	cout<<"        thank you!        "<<endl;
			             	cout<<"press any key to return to the main menu"<<endl;
			             	
						 }
						 else if(num==2)
						 {
						 	cout<<"     Atm account withdraw     "<<endl;
						 	
						 		     		cout<<" "<<endl;
								     		cout<<" "<<endl;

						 	cout<<"the name of the account holder are : rakesh kharva"<<endl;
			             	cout<<"the account holders' address is :mumbai "<<endl;
			             	cout<<"the branch location is :andheri"<<endl;
			             	cout<<"account number :5678"<<endl;
			               	cout<<"------------------------------------"<<endl;
			               	cout<<"insufficient available balance in your account."<<endl;
			               	cout<<"         sorry !!         "<<endl;
			               	cout<<"press any key to continue..."<<endl;

			             	
						 }
						 
						 else if(num==3)
						 {
						 	cout<<"your balance is :20000"<<endl;
						 	
						 }
						 
						 else if(num==3)
						 {
						 	cout<<"press any key to exit atm"<<endl;
						 	
						 }
			              

        						
        						
							}
						else
						{
						
         			    cout<<"     thank you     "<<endl;
        				 cout<<"you had made your attemp which failed !!! no more attempts allowed!! sorry!!"<<endl;
        				 cout<<"press any key to countinue..."<<endl;
         				  }
        			
        	     }
        			else
				    {
					
						cout<<"     atm account status     "<<endl;
            		   cout<<"you must have the correct pin number to access this acc. see your "<<endl; 
     				   cout<<" bank representativa for assistance during bank opening hours"<<endl; 
     				   cout<<"   thanks for, your choice today!!"<<endl;
     				   cout<<"press any key to countinue..."<<endl;
		      		  }
				
		}
	
	
};
main()
{
	atm a;
}
