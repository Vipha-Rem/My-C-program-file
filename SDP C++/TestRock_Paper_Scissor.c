#include<stdio.h>
#include<string.h>
#include<stdlib.h>	
#include<iostream>
using namespace std;
	
// Global Variables
char UserInput[20];	
char type[3][20]= {"Paper","Scissor","Rock"};
int randNumber;
char computergenerate[20];

void getUserinput();
void letComputerGerate();
void findWinner();

int main(){
	getUserinput(); // fuction use for get data from user.
	letComputerGerate(); // fuction use for let computer generate.
	cout << endl << endl;
	cout << "User input was : " << UserInput << endl;
	cout << "Computer Generate : " << computergenerate << endl;
	findWinner();
	return 0;
}
void getUserinput(){
	cout << "\tMenu for use selection : " << endl;
	cout << "\t\t 1 . Paper \n";
	cout << "\t\t 2 . Scissor \n";
	cout << "\t\t 3 . Rock \n";
	
	cout << "Your Option : "; cin >> UserInput;
}
void letComputerGerate(){
	time_t t;
	srand((unsigned)time(&t));
	randNumber = rand()%3;
	strcpy (computergenerate,type[randNumber]);
	// copy data to variable , copy from type[randNumber] to computergenerate.	
}
void findWinner(){
	if(strcmp(UserInput,"Paper")==0){
		if(strcmp(computergenerate,"Rock")==0){
			cout << "\n\t*** You win and Computer loses!!\n";
		}else if(strcmp(computergenerate,"Paper")==0){
			cout << "\n\t*** EQUAL!\n";	
		}else if(strcmp(computergenerate,"Scissor")==0){
			cout << "\n\t*** well you lose and Computer wins you!\n";
		}
	}
	else if(strcmp(UserInput,"Rock")==0){
		if(strcmp(computergenerate,"Rock")==0){
			cout << "\n\t***EQUAL !\n";
		}else if(strcmp(computergenerate,"Paper")==0){
			cout << "\n\t*** well You lose and Computer wins!\n";	
		}else if(strcmp(computergenerate,"Scissor")==0){
			cout << "\n\t*** well you win and Computer loses you!\n";
		}
	}
	else if(strcmp(UserInput,"Scissor")==0){
		if(strcmp(computergenerate,"Rock")==0){
			cout << "\n\t***!\nwell You lose and Computer wins you!";
		}else if(strcmp(computergenerate,"Paper")==0){
			cout << "\n\t*** well you win and Computer lose you!\n";	
		}else if(strcmp(computergenerate,"Scissor")==0){
			cout << "\n\t***EQUAL!\n";
		}
	}
	else{
		cout << "Error your input!!\n";
	}
}
