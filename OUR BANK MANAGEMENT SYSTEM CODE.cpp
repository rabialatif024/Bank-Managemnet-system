//==========================================================================//
//							OBJECT ORIENTED PROGRAMMING 					//
//									PROJECT									//
//							BANK MANAGEMNET SYSTEM							//
//==========================================================================//
#include<iostream>
using namespace std;
//******************************************************************//
//******************************************************************//
//			INTRODUCING BANK CLASS TO MAKE BANKING SYSTEM 			//
//******************************************************************//
//******************************************************************//
class Bank{
	private: 
	    int total;
	    long id;
	    struct Person{
	    	string name;
		 string address;
	    	long long ID,contact,cash;
		}Person[100];
	public:
		Bank(){       // DEFAULT CONSTRUCTOR
			total=0;
		}
		void options();
		void perData_toCreateacc();
		void show_details();
		void update();
		void search();
		void transactions();
		void del();
};

//******************************************************************//
//******************************************************************//
//*****************************OPTIONS FUNCTION::*******************//
//*********************TO CHOOSE ANY OF GIVEN FUNCTIONS*************//
//******************************************************************//
//******************************************************************//


void Bank::options()      // SCOPE RESOLUTION OPERATOR USED
{
	cout<<"\t\t\t============================================================\n";
	cout<<"\t\t\t\t\t WELCOME TO BANK MANAGEMENT SYSTEM\n";
	cout<<"\t\t\t============================================================\n";
	cout<<"\t\t\t::::::::::::::::::::::MAIN MENU:::::::::::::::::::::::::::::\n"<<endl;
	cout<<"\t\t\t============================================================\n";
	int ch;
	while(1){
	cout<<"\t\t\t[1]. CREATE NEW ACCOUNT  \n\t\t\t[2]. VIEW CUSTOMER LIST  \n\t\t\t[3]. UPDATE INFORMATION OF EXISTING ACCOUNT  ";
	cout<<"\n\t\t\t[4]. CHECK THE DETAILS OF AN EXISTING ACCOUNT \n\t\t\t[5]. TRANSACTIONS ";
	cout<<"\n\t\t\t[6]. DELETE EXISTING ACCOUNT \n\t\t\t[7]. EXIT" <<endl;
	cout<<"\t\t\t============================================================\n"<<endl;
	cout<<"\n\t\t\tCHOOSE AN OPTION FROM (1-7):::: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			Bank::perData_toCreateacc();
			break;
		
		case 2:
			Bank::show_details();
			break;
		case 3:
		       Bank::update();
			break;
		case 4:
			Bank::search();	
			break;
		case 5:
		     	Bank::transactions();
			break;
		case 6:
			Bank::del();
			break;
		case 7:
			cout<<"\t\t\t:::::::::::HAVE A NICE DAY SIR::::::::::\n";
			exit(0);
			break;
		default:
			cout<<"\t\t\tINVALID INPUT"<<endl;
			break;
	}
    }
}

//******************************************************************//
//*********************8*CREATE FUNCTION::**************************//
//************TO CREATE NEW ACCOUNT OF ANY PERSON ******************//
//******************************************************************//
void Bank::perData_toCreateacc()
{
	char input;
	cout<<endl;
	int n;
	cout<<"\t\t\t:::::ENTER HOW MANY ACCOUNTS YOU WANT TO CREATE :::::";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	
	cout<<"\t\t\t:::::ENTER DATA::::: "<<total+1<<endl;
	cout<<"\t\t\tENTER NAME:: ";
	cin>>Person[total].name;
	cout<<"\t\t\tENTER ID:: ";
	cin>>Person[total].ID;
	cout<<"\t\t\tENTER ADDRESS:: ";
	cin>>Person[total].address;
	cout<<"\t\t\tENTER CONTACT NUMBER:: ";
	cin>>Person[total].contact;
	cout<<"\t\t\tENTER TOTAL CASH::";
	cin>>Person[total].cash;
	total++;             // INCREMENT OPERATOR
	cout<<endl;
	
		cout<<"\t\t\tPRESS A TO CONFIRM THAT YOU WANT TO CREATE YOUR ACCOUNT :: \n"<<endl;
		cout<<"\t\t\tPRESS B TO RESTART CREATING ACCPOUNT :: \n"<<endl;
		cout<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t************************************************************"<<endl;		
	
		cout<<"\t\t\tPRESS YOUR ANY OPTION OF ABOVE 2 GIVEN OPTIONS::";
		cin>>input;
	switch(input)
	{
	case ('A'):
		
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\n \t\t\t::: YOUR ACCOUNT "<<i+1<<" HAS BEEN CREATED :::\n"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	break;	
	case ('B'): 
		cout<<"\t\t\tRESTART CREATING ACCOUNT AS YOUR INFORMATION WAS WRONG\n"<<endl;
	break;
	default:
		cout<<"\t\t\t SYSTEM ERRROR TRY AFTER FEW MINUTES\n"<<endl;
	}
}
}

//******************************************************************//
//***********************SHOW DETAILS FUNCTION::********************//
//***********************TO DISPLAY RECORD *************************//
//******************************************************************//

void Bank::show_details()
{
	cout<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t************************************************************"<<endl;	
	
	cout<<"\t\t\tENTER ID TO SEE LIST :";
	cin>>id;
	int i;
	if(id!=Person[i].ID)
	{
		cout<<"\t\t\t::: NO RECORD FOUND :::"<<endl;
	}
	for(int i=0;i<total;i++)
	{
		if(id==Person[i].ID)
		{
	cout<<"\n \t\t\t::::::: DATA :::::::"<<i+1<<endl;
	cout<<"\t\t\tNAME  			::: "<<Person[i].name<<endl;
	cout<<"\t\t\tID  			:::	"<<Person[i].ID<<endl;
	cout<<"\t\t\tADDRESS   		:::	"<<Person[i].address<<endl;
	cout<<"\t\t\tCONTACT NUMBER ::: "<<Person[i].contact<<endl;
	cout<<"\t\t\tTOTAL CASH  	::: "<<Person[i].cash<<endl;
		}
	}
}


//******************************************************************//
//**************************UPDATE FUNCTION::***********************//
//**********TO MAKE CHANGINGS IN RECORD OF ANY  PERSON *************//
//******************************************************************//
	
void Bank::update()
{
	cout<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t************************************************************"<<endl;	

	cout<<"\t\t\tENTER ID OF ACCOUNT YOU WANT TO UPDATE \n\t\t\t ID:: ";
	cin>>id;
	int i;
	if(id!=Person[i].ID)
	{
		cout<<"\t\t\t::: NO RECORD FOUND :::"<<endl;
	}
	for(int i=0;i<total;i++)
	{
		if(id==Person[i].ID)
		{
			cout<<"\t\t::::PREVIOUS DATA::::\n"<<endl;
		cout<<"\t\t\tDATA OF PERSON"<<i+1<<endl;
		cout<<"\t\t\tNAME		:: "<<Person[i].name<<endl;
		cout<<"\t\t\tID			:: "<<Person[i].ID<<endl;
		cout<<"\t\t\tADDRESS	:: "<<Person[i].address<<endl;
		cout<<"\t\t\tCONTACT	:: "<<Person[i].contact<<endl;
		cout<<"\t\t\tCASH		:: "<<Person[i].cash<<endl;
		
	cout<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t************************************************************"<<endl;

	
	cout<<"\n\t\t\tENTER NEW DATA"<<endl;
	cout<<"\t\t\tENTER NAME			: ";
	cin>>Person[i].name;
	cout<<"\t\t\tENTER ID			: ";
	cin>>Person[i].ID;
	cout<<"\t\t\tENTER ADDRESS		: ";
	cin>>Person[i].address;
	cout<<"\t\t\tENTER CONTACT		: ";
	cin>>Person[i].contact;
	cout<<"\t\t\tENTER TOTAL CASH	: ";
	cin>>Person[i].cash;
	
}
	}
}


//******************************************************************//
//*********************SEARCH FUNCTION::****************************//
//****TO FIND RECORD OF SPECIFIC PERSON ****************************//
//******************************************************************//

void Bank::search()
{
	
	cout<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
cout<<"\t\t\tENTER ID OF OF PERSON YOU WANT TO SEARCH \n\t\t\t ID:: ";
cin>>id;
int i;
if(id!=Person[i].ID)
	{
		cout<<"\t\t\t::: NO RECORD FOUND :::"<<endl;
	}
for(int i=0;i<total;i++)
{
	if(id==Person[i].ID)
	{
		cout<<"\t\t\t::::HERE IS THE DATA::::::\n"<<endl;
		cout<<"\t\t\tNAME			::: "<<Person[i].name<<endl;
		cout<<"\t\t\tID				::: "<<Person[i].ID<<endl;
		cout<<"\t\t\tADDRESS		::: "<<Person[i].address<<endl;
		cout<<"\t\t\tCONTACT		::: "<<Person[i].contact<<endl;
		cout<<"\t\t\tCASH			::: "<<Person[i].cash<<endl;
	}
}
}



//******************************************************************//
//*******************TRANSACTION FUNCTION::*************************//
//*********************TO WITHDRAW *********************************//
//***DEPOSIT MONEY**************************************************//
//******************************************************************//
void Bank::transactions()
{
	cout<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t************************************************************"<<endl;

	int cash;
	int ch,i;
	cout<<"\t\t\tENTER ID FOR TRANSACTION \n\t\t\tID:: ";
       cin>>id;
       if(id!=Person[i].ID)
	   {
		cout<<"\t\t\t::: NO RECORD FOUND :::"<<endl;
	}	
       for(int i=0;i<total;i++)
	   {
       if(id==Person[i].ID)
	   {
	cout<<"\n\t\t\tPRESS 1 TO DEPOSIT :";
	cout<<"\n\t\t\tPRESS 2 TO WITHDRAW :";
	cout<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\n\t\t\t (1 OR 2): ";
	cin>>ch;
		     switch(ch)
			 {
		     	case 1:
		     		cout<<"\t\t\tENTER AMOUNT OF CASH YOU WANT TO DEPOSIT::";
		     		cin>>cash;
		     		Person[i].cash+=cash;
		     		cout<<"\t\t\tYOUR CASH IS:: "<<Person[i].cash<<endl;
		     		break;
		     	case 2:
		     		cout<<"\t\t\tENTER AMOUNT OF MONEY YOU WANT TO WITHDRAW::";
		     		cin>>cash;
		     		if(cash>Person[i].cash)
					 {
		     			cout<<"\t\t\tYOUR EXISTING CASH IS:: "<<Person[i].cash<<endl;
					 }
					 Person[i].cash-=cash;
					 cout<<"\t\t\tYOUR CASH IS ::"<<Person[i].cash<<endl;
					 break;
				default:
					cout<<"\t\t\tINVALID INPUT"<<endl;
					break;
	 }
}
}
}


//******************************************************************//
//*********************************DELETE FUNCTION::****************//
//**********************TO DELETE RECORD OF SPECIFIC PERSON ********//
//************************OR DELETE FULL RECORD*********************//
//******************************************************************//
void Bank::del()
{
	cout<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	int ch;
	cout<<"\t\t\tPRESS 1 TO REMOVE SPECIFIC RECORD :: ";
	cout<<"\n\t\t\tPRESS 2 TO REMOVE FULL RECORD :: ";
	cout<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	cout<<"\t\t\tCHOOSE ANY OPTION OF ABOVE 2 GIVEN OPTIONS::";
	cin>>ch;
	cout<<endl;
	switch(ch)
	{
		case 1:
	cout<<"\t\t\tENTER ID OF ACCOUNT YOU WANT TO REMOVE \n \t\t\tID :: ";
     cin>>id;
     int i;
     		 if(id!=Person[i].ID)
			  {
		 	cout<<"\t\t\t :: NO RECORD FOUND ::\n"<<endl;
			 }
     for(int i=0;i<total;i++)
	 {
     	if(id==Person[i].ID)
		 {
     		for(int j=i;j<total;j++)
			 {
     		Person[j].name=Person[j+1].name;
     		Person[j].ID=Person[j+1].ID;
     		Person[j].address=Person[j+1].address;
     		Person[j].contact=Person[j+1].contact;
     		Person[j].cash=Person[j+1].cash;
     		total--;               // DECREMENT OPERATOR
     		cout<<"\t\t\tYOUR REQUIRED DATA IS DELETED \n"<<endl;
     			cout<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
			 }
	 }
	}
	 break;
	 case 2:
	 	total=0;
	 	cout<<"\t\t\tALL RECORD IS DELETED"<<endl;
	 		cout<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t************************************************************"<<endl;
	 	break;
	default:
		cout<<"\t\t\tINVALID INPUT"<<endl;
		break;
	}

}

//******************************************************************//
//************************MAIN FUNCTION*****************************//
//******************************************************************//
int main()
{
	// MAKING OBJECT OF CLASS 
	Bank B;
	// CALLING OPTION FUNCTION BY OBJECT OF CLASS BANK 
	B.options();
	
	return 0;
}

//******************************************************************//
//***********************END OF PROJECT*****************************//
//******************************************************************//
