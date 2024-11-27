#include<iostream>
int main(){
	std::string question[]={"1. In which collage you are studying ?:",
							"2. What is your branch ?:",
							"3. In which Division ?:",
							"4. In which Year ?:"};
	std::string options[][4]={{"A. PICT","B. VJTI","C. COEP","D.PCCOE"},
							{"A. IT","B. CS","C. ENTC","D. AIML"},
							{"A. 8","B. 9","C. 10","D. 11"},
							{"A. FE","B. BE","C. SE","D. TE"}};
	char key[]={'A','B','D','C'};

	int counter;

	int row=sizeof(options)/sizeof(options[0]);
	int column=sizeof(options[0])/sizeof(options[0][0]);
	int Q=sizeof(question)/sizeof(std::string);
	int K=sizeof(key)/sizeof(std::string);

	char ans[row];

	for(int i=0;i<row;i++){
		do{
			std::cout<<question[i]<<'\n';
			for(int j=0;j<column;j++){
				std::cout<<options[i][j]<<' ';
			}
		std::cout<<'\n';
		std::cin>>ans[i];
		ans[i]=toupper(ans[i]);
		}while(ans[i]!='A' && ans[i]!='B' && ans[i]!='C' && ans[i]!='D');
		
	}

	std::cout<<"Your selected options are: ";
	for(int k=0;k<row;k++){
		std::cout<<ans[k]<<' ';
	}

	std::cout<<'\n';

	std::cout<<"Correct options are: ";
	for(int f=0;f<row;f++){
		std::cout<<key[f]<<' ';
	}

	std::cout<<'\n';
	for(int l=0;l<row;l++){
		if(ans[l]==key[l]){
			counter++;
		}
	}

	std::cout<<"Your score : "<<counter<<"/"<<Q;
	return 0;
}