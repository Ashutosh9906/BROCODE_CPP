#include<iostream>
#include<ctime>		//Needed headerfile for generating random number
char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void showwinner(char player,char computer);
int main(){

	char player;
	char computer;

	player = getuserchoice();		//Taking player inputs through function getuserchoice
	std::cout<<"Your choice = ";
	showchoice(player);		//passing player variable to function showchoice

	computer = getcomputerchoice();		
	std::cout<<"Computer choice = ";
	showchoice(computer);		//passing computer variable to function showchoice

	showwinner(player,computer);

	return 0;
}
char getuserchoice(){

	char player;
	std::cout<<"Rock-Paper-Scissors\n";
	do{
		std::cout<<"*******************\n";
		std::cout<<"'r' Rock \n";
		std::cout<<"'p' Paper \n";
		std::cout<<"'s' Scissors \n";
		std::cin>>player;
	}
	while(player!='r' && player!='p' && player!='s');

	return player;
}
char getcomputerchoice(){

	srand(time(0));
	int num=rand()%3+1;

	switch(num){
		case 1:return 'r';
		case 2:return 'p';
		case 3:return 's';
	}
	return 0;
}
void showchoice(char choice){		//as using one variable at time so name of variable can changed

	switch(choice){
	case 'r':std::cout<<"Rock\n";
		break;
	case 'p':std::cout<<"Paper\n";
		break;
	case 's':std::cout<<"Scissors\n";
		break;
	}

}
void showwinner(char player, char computer){		//Taking both variable at time to decide winner

	switch(player){

	case 'r': 
		if(computer == 'r'){
			std::cout<<"It's a tie!";
		}
		else if(computer == 'p'){
			std::cout<<"You loose!";
		}
		else{
			std::cout<<"You Win!";
		}
		break;

		case 'p': 
		if(computer == 'r'){
			std::cout<<"You Win!";
		}
		else if(computer == 'p'){
			std::cout<<"It's a tie!";
		}
		else{
			std::cout<<"You loose!";
		}
		break;

		case 's': 
		if(computer == 'r'){
			std::cout<<"You loose!";
		}
		else if(computer == 'p'){
			std::cout<<"You Win!";
		}
		else{
			std::cout<<"You loose!";
		}
		break;

	}

}
