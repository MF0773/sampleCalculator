#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	//declaring variables
	double num1,num2,result;
	char ch,exit;
	
	//a continues loop for preventing to quit program
	while(1){
		//getting inputs from user
		cout<<"<first number>_space_<+|-|*|/>_space_<scond number>,then press enter.\n";	
		cin>>num1>>ch>>num2;
		
		//do math oprator wich user need
		switch(ch){
			case '+':
				result = num1+num2;
				break;
			case '-':
				result = num1-num2;
				break;
			case '*':
				result = num1*num2;
				break;
			case '/':
				result = num1/num2;
				break;
			default:
				cout<<"please put a valid oparator :-|"<<endl;
				continue;//continue means go back to start of the loop (to line 13)
		}
		//show the result
		cout<<result<<endl;
		
		//ask to exiting program
		cout<<"do you want to exit?yes='y' and no='n'\n";
		cin>>ch;
		if(ch == 'y')
			break;
		cout<<flush;
	}
	
	return 0;
}
