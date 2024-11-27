/* luhn algorithm
--------------------
1. double every second digit from right to left
   If doubled number is two digit, split them
2. Add all single digit from step 1.
3. Add all odd numbered digit from right to left
4. Sum results from step 2. & 3.
5. If step 4. result is divisible by 10, # is valid */
#include<iostream>
int getdigit(const int number);
int oddnum(const std::string cardnumber);
int evennum(const std::string cardnumber);
int main(){

	std::string cardnumber;
	std::cout<<"Enter your credit card number: ";
	std::cin>>cardnumber;

	int result=oddnum(cardnumber)+evennum(cardnumber);
	std::cout<<"Your credit card no: "<<cardnumber<<" is ";

	if(result%10==0){
		std::cout<<"valid!";
	}
	else{
		std::cout<<"invalid!";
	}

	return 0;
}
int getdigit(const int number){
	return number%10+((number/10)%10);
}
int oddnum(const std::string cardnumber){
	int sum=0;
	for(int i=cardnumber.size()-1;i>=0;i-=2){
		sum += (cardnumber[i]-'0');
	}
	return sum;
}
int evennum(const std::string cardnumber){
	int sum=0;
	for(int i=cardnumber.size()-2;i>=0;i-=2){
		sum += getdigit((cardnumber[i]-'0')*2);
	}
	return sum;
}