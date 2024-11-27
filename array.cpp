#include<iostream>
double totalcost(double cost[],double size);
int mynumsearch(int array[],int mynum,int size);
void arraysort(int array[],int size);
int main()
{
	/* std::string cars[]={"BMW","MERCEDES","PORCHE"};
	int num[]={1, 2, 3, 4, 5};
	std::cout<<sizeof(num)/sizeof(int)<<" Elements";
	return 0; */

	/* std::string name[]={"Ashutosh","Atharva","Sarvesh","Soham","Prathamesh"};
	for(int i=0;i<sizeof(name)/sizeof(std::string);i++){
		std::cout<<name[i]<<'\n';
	}
	return 0; */

	/* double cost[]={45,10,39,63.63,29,10};
	double size=sizeof(cost)/sizeof(double);
	double total=totalcost(cost,size);
	std::cout<<"$"<<total;
	return 0;*/ 

	/* int num[]={1,2,3,4,5,6,7,8,9,10};
	int size=sizeof(num)/sizeof(int);
	int mynum;
	int element;
	std::cout<<"Enter the number to be search: ";
	std::cin>>mynum;
	element=mynumsearch(num,mynum,size);
	if(element != -1){
		std::cout<<"Your element is at "<<element;
	}
	else{
		std::cout<<"The number in not in this array!";
	}
	return 0;*/ 

	/*int num[]={10,5,9,8,7,3,4,6,2,1};
	int size=sizeof(num)/sizeof(int);
	arraysort(num,size);
	for(int i=0;i<size;i++){
		std::cout<<num[i]<<" ";
	}
	return 0;*/

	/* const int SIZE=1000;
	std::string food[SIZE];
	fill(food ,food+SIZE,"VADAPAV");
	for(int i=0;i<SIZE;i++){
		std::cout<<food[i]<<' ';
	}
	return 0; */

	/* std::string foods[5];
	int size=sizeof(foods)/sizeof(std::string);
	std::string temp;
	for(int i=0;i<5;i++){
		std::cout<<"Enter your favourite food or press'q' to exit #"<<i+1<<": ";
		std::getline(std::cin, temp);
		if(temp == "q"){
			break;
		}
		else{
			foods[i]=temp;
		}
	}
	for(int j=0;!foods[j].empty();j++){
		std::cout<<foods[j]<<'\n';
	}
	return 0; */

	std::string array[3][3]={{"Nano","Indigo","Punch"},
							{"WagonR","Ritz","Hexter"},
							{"Supra","Fortuner","UrbanCrusier"}};
	int row=sizeof(array)/sizeof(array[0]);
	int column=sizeof(array[0])/sizeof(array[0][0]);

	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			std::cout<<array[i][j]<<' ';
		}
		std::cout<<'\n';
	}
	return 0;
}
void arraysort(int array[],int size){
	int temp=0;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i;j++){
			if(array[j]<array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}

int mynumsearch(int array[],int mynum,int size){
	for(int i=0;i,size;i++){
		if(array[i]==mynum){
			return i;
		}
	}
	return -1;
}

double totalcost(double cost[], double size){
	double total=0;
	for(int i=0;i<size;i++){
		total += cost[i];
	}
	return total;
}