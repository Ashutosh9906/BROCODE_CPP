#include<iostream>
#include<ctime>
void printboard(char spaces[]);
void playermove(char spaces[],char player);
void computermove(char spaces[],char computer);
bool checkwinner(char spaces[],char player,char computer);
bool checkiftie(bool running,char spaces[]);
int main(){
	char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
	char player = 'X';
	char computer = 'o';
	bool running = true;
	printboard(spaces);
	while(running){
		playermove(spaces,player);
		printboard(spaces);
		if(checkwinner(spaces,player,computer)){
			running = true;
			break;
		}
		else if(checkiftie(running,spaces)){
			running = false;
			break;
		}
		computermove(spaces,computer);
		printboard(spaces);
		if(checkwinner(spaces,player,computer)){
			running = false;
			break;
		}
		else if(checkiftie(running,spaces)){
			running = false;
			break;
		}
	}
	std::cout<<"Thank you for playing!";
	return 0;
}
void printboard(char spaces[]){
	std::cout<<'\n';
	std::cout<<"     |     |     "<<'\n';
	std::cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"  "<<'\n';
	std::cout<<"_____|_____|_____"<<'\n';
	std::cout<<"     |     |     "<<'\n';
	std::cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"  "<<'\n';
	std::cout<<"_____|_____|_____"<<'\n';
	std::cout<<"     |     |     "<<'\n';
	std::cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"  "<<'\n';
	std::cout<<"     |     |     "<<'\n';
	std::cout<<'\n';
}
void playermove(char spaces[],char player){
	int number;
	do{
		std::cout<<"Enter the spot to place a mark: ";
		std::cin>>number;
		number--;
		if(spaces[number]==' '){
			spaces[number]=player;
			break;
		}
	}while(!number > 0||!number < 8);
}
void computermove(char spaces[],char computer){
	int number;
	srand(time(0));
	while(true){
		number=(rand()%9);
		if(spaces[number]==' '){
			spaces[number]=computer;
			break;
		}
	}
}
bool checkwinner(char spaces[],char player,char computer){
	if(spaces[0]!=' '&&spaces[0]==spaces[1]&&spaces[1]==spaces[2]){
		spaces[0]==player?std::cout<<"YOU WIN!\n":std::cout<<"YOU LOOSE!";
	}
	else if(spaces[3]!=' '&&spaces[3]==spaces[4]&&spaces[4]==spaces[5]){
		spaces[3]==player?std::cout<<"YOU WIN!\n":std::cout<<"YOU LOOSE!";
	}
	else if(spaces[6]!=' '&&spaces[6]==spaces[7]&&spaces[7]==spaces[8]){
		spaces[6]==player?std::cout<<"YOU WIN!\n":std::cout<<"YOU LOOSE!";
	}
	else if(spaces[0]!=' '&&spaces[0]==spaces[3]&&spaces[3]==spaces[6]){
		spaces[0]==player?std::cout<<"YOU WIN!\n":std::cout<<"YOU LOOSE!";
	}
	else if(spaces[1]!=' '&&spaces[1]==spaces[4]&&spaces[4]==spaces[7]){
		spaces[1]==player?std::cout<<"YOU WIN!\n":std::cout<<"YOU LOOSE!";
	}
	else if(spaces[2]!=' '&&spaces[2]==spaces[5]&&spaces[5]==spaces[8]){
		spaces[2]==player?std::cout<<"YOU WIN!\n":std::cout<<"YOU LOOSE!";
	}
	else if(spaces[0]!=' '&&spaces[0]==spaces[4]&&spaces[4]==spaces[8]){
		spaces[0]==player?std::cout<<"YOU WIN!\n":std::cout<<"YOU LOOSE!";
	}
	else if(spaces[2]!=' '&&spaces[2]==spaces[4]&&spaces[4]==spaces[6]){
		spaces[2]==player?std::cout<<"YOU WIN!\n":std::cout<<"YOU LOOSE!";
	}
	else{
		return false;
	}
	return true;
}
bool checkiftie(bool running,char spaces[]){
	for(int i=0;i<8;i++){
		if(spaces[i]==' '){
			return false;
		}
	}
	std::cout<<"IT'S A TIE!";
	return true;
}