#include<iostream>

/* void name(std::string nam, int age); // declaration of fun which is to be used */
void name(std::string nam, int age); 

int main(){
    std::string nam="Ashutosh";
    int age=21;	// pass argument of variables to be used outside the main function 
    name(nam,age);  // ( Name of function can also be changed while passing does not cause error )
    return 0;
}

/* void name(std::string nam, int age){ //if function defined after the main function it should be declared before int main */
void name(std::string nam, int age){
    std::cout<<"Happy birthday "<<nam<<'\n';
    std::cout<<"Happy birthday "<<nam<<'\n';
    std::cout<<"Happy birthday dear "<<nam<<'\n';
    std::cout<<"Happy birthday to you!"<<'\n';
    std::cout<<"You are "<<age<<" years old"; 
}

/* double square(double length, double breadth); //function has to be declared asper its variable declaration (Here inted of void double is used) */
double square(double length, double breadth);

int main(){
    double length,breadth;

    std::cout<<"Enter length of rectangle = ";
    std::cin>>length;
    std::cout<<"Enter breadth of rectangle = ";
    std::cin>>breadth;

    double area = square(length,breadth);
    std::cout<<"Area of square is =  "<<area<<"cm^2";  

    return 0;
}

/* double square(double length, double breadth){ */
double square(double length, double breadth){
    return length*breadth;
}

/* std::string concat(std::string string1,std::string string2); */
std::string concat(std::string string1,std::string string2);

int main(){
    std::string firstname="Ashutosh";
    std::string lastname="Gandule";
    std::string fullname= concat(firstname,lastname);

    std::cout<<"Your fullname is :"<<fullname;

    return 0;
}

/* std::string concat(std::string string1,std::string string2){ */
std::string concat(std::string string1,std::string string2){
    return string1+" "+string2;
}

/* void bakepizza(std::string topping1,std::string topping2); */
void bakepizza(std::string topping1,std::string topping2);

int main(){
    bakepizza("Panner","Cheese");
    return 0;
}

/* void bakepizza(){	//you can use differnt function with same name having differernt arguments */
void bakepizza(){
    std::cout<<"Here is your pizza!";
}

/* void bakepizza(std::string topping1){	//A function name and its arguments makes an signature which is different for each in this case */
void bakepizza(std::string topping1){
    std::cout<<"Here is your "<<topping1<<" pizza!";
}

/* void bakepizza(std::string topping1,std::string topping2){ */
void bakepizza(std::string topping1,std::string topping2){
    std::cout<<"Here is your "<<topping1<<" and "<<topping2<<" pizza!";
}

/* void mynum(); */
void mynum();

/* int num=3; */
int num=3;

int main(){
    int num=1;
    std::cout<<::num<<'\n';
    mynum();
    return 0;
}

/* void mynum(){ */
void mynum(){
    int num=2;
    std::cout<<num;
}
