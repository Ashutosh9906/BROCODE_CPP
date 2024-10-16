#include<iostream>
#include<iomanip>

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

	double balance=0;
	int choice;
	do {
		std::cout<<"******************\n";
		std::cout<<"Enter your choice \n";
		std::cout<<"******************\n";
		std::cout<<"1. Show balance: \n";
		std::cout<<"2. Deposit money: \n";
		std::cout<<"3. Withdraw money: \n";
		std::cout<<"4. Exit: \n";
		std::cin>>choice;

		std::cin.clear();
		fflush(stdin);

		switch(choice){
			case 1: showbalance(balance);
				break;
			case 2: balance += deposit();
				showbalance(balance);
				break;
			case 3: balance -= withdraw(balance);
				showbalance(balance);
				break;
			case 4: std::cout<<"Thank you for visiting! ";
				break;
			default: std::cout<<"Invalid choice!";
			}
		}while(choice != 4);

	return 0;
}

void showbalance(double balance){
	std::cout<<"Your balance: $"<<std::setprecision(2)<<std::fixed<<balance<<"\n\n";
}

double deposit(){
	double amount=0;
	std::cout<<"Enter the amount to be deposited: ";
	std::cin>>amount;

	if(amount>0){
		return amount;
	}
	else{
		std::cout<<"That`s not an valid amount! \n";
		return 0;
	}
} 

double withdraw(double balance){
	double amount=0;
	std::cout<<"Enter amount to be withdrawn: ";
	std::cin>>amount;

	if(amount<0){
		std::cout<<"That's not an valid amount!\n";
		return 0;
	}
	else if(amount>balance){
		std::cout<<"You do not have that much fund's\n";
		return 0;
	}
	else{
		return amount;
	}
}
































