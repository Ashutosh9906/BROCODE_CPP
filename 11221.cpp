#include<iostream>
#include<ctime>
int main()
{
	int a=5,b=4,c;
	c=std::max(a,b);
	std::cout<<c;
	return 0;
/*--------------------------------------------------------------1*/
 int temp;
std::cout<<"Enter the temperature in celsius:";
std::cin>>temp;

if(temp>=0 && temp<=30){
std::cout<<"The temperature is good!";
} 
else{
std::cout<<"Temperature is bad!";
} 

if(temp<=0 || temp>=30){
std::cout<<"Temperature is bad!";
} 

/*-----------------------------------------------------------------2*/
  int temp;
char unit;
std::cout<<"**********TEMPERATURE CALCULATOR**********\n";

std::cout<<"C:Celsius\n";
std::cout<<"F:Farenhit\n";
std::cout<<"Enter the unit in which you wanted to convert to:";
std::cin>>unit;

if(unit=='C' || unit=='c'){
std::cout<<"Enter the tenperature in Farenhit:";
std::cin>>temp;
temp=(1.8*temp)+32;
std::cout<<"Temperature is "<<temp<<"C";
}
else if(unit=='F' || unit=='f'){
std::cout<<"Enter the temperature in celsius:";
std::cin>>temp;
temp=(temp-32)/1.8;
std::cout<<"Temperature is "<<temp<<"F\n";
}
else{
std::cout<<"Enter either C or F !\n";
}

std::cout<<"******************************************\n"; 

/*------------------------------------------------------------3*/
 std::string name; 
std::cout<<"Enter your name:";
std::getline(std::cin ,name);

 if(name.length()>12){
std::cout<<"Your name could'nt exceed 12 charachter!";
}
else{
std::cout<<"Hello "<<name;
} 

 if(name.empty()){
std::cout<<"You have'nt enter your name!";
}
else{
std::cout<<"Hello "<<name;
} 

name.clear();
std::cout<<"Hello"<<name; 

 name.append("@gmail.com");
std::cout<<"Your username is "<<name; 

std::cout<<name.at(0); //It displays the letter at the given position

 name.insert(2,"@");
std::cout<<name; 

std::cout<<name.find(' ');

 name.erase(0, 3);
std::cout<<name; 

/*----------------------------------------------------------4*/
 std::string name;
while(name.empty()){
std::cout<<"Enter your name = ";
std::getline(std::cin, name);
}
std::cout<<"Hello "<<name; 

/*-----------------------------------------------------------------------5*/
 int num;
do{
std::cout<<"Enter a positive number:";
std::cin>>num;
}
while(num<0);
std::cout<<"The number is :"<<num; 

/*;-------------------------------------------------------------6*/
  int i,j,rows,column;
char symb;

std::cout<<"Enter number of rows = ";
std::cin>>rows;
std::cout<<"Enter number of column = ";
std::cin>>column;
std::cout<<"Enter any symbol = ";
std::cin>>symb;

for(i = 1; i <= rows; i++){
	for(j=1 ;j<=column;j++){
		std::cout<<symb<<' ';	
	}
	std::cout<<'\n';
} 

/*-------------------------------------------------------------7*/
  srand(time(NULL));
int num1=(rand() % 6)+1;

std::cout<<num1; 

  srand(time(NULL));
int num1=(rand()%5)+1;

switch(num1){
case 1: std::cout<<"You won a Trimax";
	break;
case 2: std::cout<<"You won a T-shirt";
	break;
case 3: std::cout<<"You won a Part ticket";
	break;
case 4: std::cout<<"You won a Tech bag";
	break;
case 5: std::cout<<"You won a Gucci Bag";
	break;
}  

/*;------------------------------------------------------------------8*/
 int num,guess,tries=0;
srand(time(NULL));
num=(rand()%100)+1;

std::cout<<"***************NUMBER GUESS***************\n";

do{
std::cout<<"Enter your guess from (1-100):";
std::cin>>guess;

tries++;

if(guess < num){
std::cout<<"Too low\n";
}
else if(guess > num){
std::cout<<"Too high\n";
}
else{
std::cout<<"Correct! guess \n";
std::cout<<"No tries = "<<tries;
}

}
while(num != guess);

std::cout<<"******************************************"; 

/**************************************************************************/
 
return 0;
}






























