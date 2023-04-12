#include <iostream>
using namespace std;

int main() {
	const int defaultpin = 0000;
	int attempts = 0;
	int select;
	float reference;
	char option;
	char Y;
	char N;
	int number;
	float amount;
	int pin;
	int c_pin;
	int new_pin;
	float balance, counter;
	string digits;
	balance = 1000;
	cout <<"Main Menu\n";
	
	cout<<"1.Check Balance\n";
	cout<<"2.Reset/change Pin\n";
	cout<<"3.Send Money\n";
	cin>>select;
	
	if(select==1)
	{
		do{
		
		 cout<<"Please Enter Your 4-digit PIN:\n";
cin >> pin;
attempts++;

if(pin!= defaultpin){
	cout<<"Incorrect PIN. Please try again\n";
}	
else if (pin==defaultpin){
	cout<<"Your Balance is 1000";
}

}
while (pin!=defaultpin && attempts>3);
if (attempts==3){
	cout<<"account is blocked\n";
	
	cout << "Maximum attempts reached";
	
	cout<<"Exiting Program.......\n";
}

switch(pin){
	break;
}
}
else if (select==2){
	cout<<"Are You Sure You Want To Change Your Pin"<<endl;
	
	cout<<"Choose Y/N"<<endl;
	
	cin>>option;
	cout<<"Enter old pin \n";
	cin>>pin;
	if(pin==defaultpin){
	}

}
	if(option==Y||option=='y'){
		cout<<"Enter New Pin\n";
		cin>>new_pin;
		pin==new_pin;
		cout<<"Your New Pin Is \n" <<new_pin;
	}
	else if(option==N||option=='n'){
		cout<<"Exiting Program \n";
	}
	else if(new_pin!=new_pin){
		cout<<"SORRY WRONG PIN \n";
	
	}
	else if(select==3){
		cout<<"Enter Mobile Number: \n";
		
		cin>>number;
		cout<<"Enter Ammount To Transfer\n";
		
		cin>>amount;
		cout<<"Transfer " << amount << "to " <<number<<endl;
		
		cout<<"Enter Reference\n";
		
		cin>>reference;
		cout<<"Please Enter Your PIN\n";
		
		cin>>pin;
	}
		do{
			attempts++;
			if(pin!=defaultpin)
				cout<<"Incorrect PIN. Please try again\n";
			
			else if(pin==defaultpin)
				cout<<"You Have Successfully Sent " <<amount<< "to" <<number<<endl;
			
			cout<<"Your Current Balance Is "<<balance-amount<<endl;
			
		}while(pin!=defaultpin&&attempts>3);
		if(attempts>3){
			cout<<"Maximum attempts reached";
			
			cout<<"Exiting Program"<<endl;
		}
		switch(pin){
			break;
		}
			
	
	return 0;
}
