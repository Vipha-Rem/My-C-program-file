#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
int I;
	string AuthorN[7];
	int pY[7];
	float price[7];
	int D;
	long isbn[7];
	
	float gr[5];
	int j;
	
	string NameC[10000];
	long NumC[10000];
	int Ii;
	int many = 0;
	
	int Jj;
	int TT = 0;
	string Task[10000];
	int IDTask[10000];
	
void ISBN(long isbn[7]){
	cout << "\tISBN :\t";
	for(D=0;D<7;D++){
		cout << isbn[D] << "\t\t";
	}
	long bookN;
	cout << endl << endl;
	cout << "Enter the ISBN : "; cin >> bookN;
	for(D=0;D<7;D++){
		if(isbn[D] == bookN){
			cout << "- " << AuthorN[D] << "\t\t" << pY[D] << "\t\t $" << price[D] << "\t\t" << isbn[D] << endl << endl; 
		}
		else{
			continue;
		}
	}
}
void Display(){	
	cout << "\tDisplay all 7 books : " << endl << endl;
	for(I=0;I<7;I++){
		cout << "- " << AuthorN[I] << "\t\t\t" << pY[I] << "\t\t $" << price[I] << "\t\t" << isbn[I] << endl;
	}
}
float avg(float gr[]){
	int k;
	float s = 0;
	for(k=0;k<5;k++){
		s = s + gr[k];
	}
	return s/5;
}

void Add(){
	cout << "Enter number of contact to add : "; cin >> many;
		for(Ii=3;Ii<many+3;Ii++){
			cout << "Name : "; fflush(stdin); getline(cin,NameC[Ii]);
			cout << "Number : 0"; cin >> NumC[Ii];
		}
		
}
void Sch(){
	string NameS;
		cout << "Enter name : "; fflush(stdin); getline(cin,NameS);
		for(Ii=0;Ii<many+3;Ii++){
			if(NameS.compare(NameC[Ii])==0){
				cout << "\t This contact is in the list : 0" << NumC[Ii] << endl; exit(0);
			}
			else{
				continue;
			}
		}
		cout << "\t This contact is not in the list" << endl; 
}
void Dis(){
	cout << endl << "\t Display contact " << endl;
		for(Ii=0;Ii<many+3;Ii++){
			cout << NameC[Ii] << "\t\t 0" << NumC[Ii] << endl;	
		}
		
}

void AddT(){
	cout << "Enter the number of task : "; cin >> TT;
	for(Jj=2;Jj<TT+2;Jj++){
		cout << "Enter the ID of task : "; fflush(stdin); cin >> IDTask[Jj];
		cout << "Describe task [" << IDTask[Jj] << "] : "; fflush(stdin); getline(cin,Task[Jj]);
	}
	cout << endl;
}
void ComT(){
	int ComID;
	cout << "Enter the completed task ID : "; cin >> ComID;
	for(Jj=0;Jj<TT+2;Jj++){
		if(ComID == IDTask[Jj]){
			cout << setw(60) << "Task [" << IDTask[Jj] << "] completed" << endl; exit(0);
		}
		else{
			continue;
		}
	}
	cout << setw(60) << "ID of task not found" << endl; exit(0);
}
void DisT(){
	for(Jj=0;Jj<TT+2;Jj++){
		cout << IDTask[Jj] << "\t\t" << Task[Jj] << endl;
	}
	cout << endl;
}

int main(){ //main
	char Yopt;
	cout << "Assignment SDP2 (1) : Done by Rem Sonavin" << endl << endl;
	cout << "A. Exercise 1 : Ask info" << endl;
	cout << "B. Exercise 2 : Vowel and consonant" << endl;
	cout << "C. Exercise 3 : Tax" << endl;
	cout << "D. Exercise 4 : time Format" << endl;
	cout << "E. Exercise 5 : Sum of (1,n)" << endl;
	cout << "F. Exercise 6 : Number and letter" << endl;
	cout << "G. Exercise 7 : Integer divisible with 3" << endl;
	cout << "H. Exercise 8 : Max and Min" << endl;
	cout << "I. Exercise 9 : Input non stop" << endl;
	cout << "J. Exercise 10 : Book info" << endl;
	cout << "K. Exercise 11 : Temperature conversion" << endl;
	cout << "L. Exercise 12 : Shopping list" << endl;
	cout << "M. Exercise 13 : Average 5 exams" << endl;
	cout << "N. Exercise 14 : Contact list" << endl;
	cout << "O. Exercise 15 : Task Tracker" << endl;
	cout << "P. Exit" << endl;
	
	MenU :
	cout << endl << "Enter your option (an uppercase letter) to operate an exercise : "; fflush(stdin); cin >> Yopt;
	cout << endl << endl; 
	switch(Yopt){
		case 'A' : {
			cout << "Exercise 1 : Ask info" << endl << endl;
			string name;
			char gender;
			string major;
			int age;
	
			cout << "Enter your name        : "; fflush(stdin); getline(cin,name);
			cout << "Enter your gender (M/F): "; fflush(stdin); cin >> gender;
			cout << "Enter your major       : "; fflush(stdin); getline(cin,major);
			cout << "Enter your age         : "; cin >> age;
	
				if(gender == 'M'){
					cout << endl << "Hi, Mr. " << name << " , your age is " << age << " years old and you learn " << major << endl;
				}
				else if(gender == 'F'){
					cout << endl << "Hi, Mrs. " << name << " , you are " << age << " years old and you are majoring in " << major << endl;
				}
				else{
					cout << endl << "Error input gender!" << endl;
				}
			break;
		}
		case 'B' : {
			cout << "Exercise 2 : Vowel or consonant" << endl << endl;
			char character;
			cout << "Input a character (latin letter): "; fflush(stdin); cin >> character;
			if(isalpha(character)!=0){ 
				//isalpha() is a function used to check whether the char. is alphabet or not, 
				//if it is alphabet, it returns 0, otherwise, it return non-zero number
				if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'){
				cout << endl << "This inputted character is vowel in lowercase letter" << endl;
				}
				else if(character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U'){
				cout << endl << "This inputted character is vowel in uppercase letter" << endl;
				}
				else{
				cout << "This inputted character is consonant" << endl;
				}
			}
			else{
				cout << "This inputted character is neither vowel nor consonant" << endl;
			}
			break;
		}
		case 'C' : {
			cout << "Exercise 3 : Tax" << endl << endl;
			char gender;
			int age;
			cout << "Enter your age         : "; cin >> age;
			cout << "Enter your gender (M/F): "; fflush(stdin); cin >> gender;
			cout << endl;
			if(gender == 'M'){
				if(age >= 16){
					cout << "You need to pay tax!" << endl;
				}
				else{
					cout << "You don't need to pay tax!" << endl;
				}
			}
			else if(gender == 'F'){
				if(age >= 18){
					cout << "You need to pay tax!" << endl;
				}
				else{
					cout << "You don't need to pay tax!" << endl;
				}
			}
			else{
				cout << "Error input gender!" << endl;
			}
			break;
		}
		case 'D' : {
				cout << "Exercise 4 : Time conversion" << endl << endl;
				int seconds;
				cout << "Input the second : s"; cin >> seconds;
				int hours = seconds/3600;
				int Rhour = seconds%3600;
				int minutes = Rhour/60;
				int Rsec = Rhour%60;
				cout << endl << "Hours" << "\t\t" << "Minutes" << "\t\t" << "Seconds" << endl;
				cout << hours << "h\t\t" << minutes << "mn\t\t" << Rsec << "s" << endl;
			break;
		}
		case 'E' : {
				cout << "Exercise 5 : Summation from 1 to n" << endl << endl;
				int num;
				cout << "Enter a number (n) : "; cin >> num;
				int i,sum=0;
				for(i=1;i<=num;i++){
					sum = sum + i;
				}
				cout << "Summation from 1 to " << num << " is : " << sum;
				break;
		}
		case 'F' : {
				cout << "Exercise 6 : Number/Letter" << endl << endl;
			char Character;
			cout << "Enter a character : "; cin >> Character;
			
				if(isdigit(Character) != 0){ //check whether it's a number
					cout << "Your inputted character is a number : " << Character << endl;
				}
				else if(isalpha(Character)!= 0){ //check whether it's an alphabet
					if(isupper(Character)!=0){ //check whether Char. uppercase
						cout << "Your inputted character is an uppercase letter : " << Character << endl;
					}
					else if(islower(Character)!=0){ //check whether Char. lowercase
						cout << "Your inputted character is a lowercase letter : " << Character << endl;
					}
				}
				else{
					cout << "Your inputted character is neither number nor letter : " << Character << endl;
				}
			break;
		}
		case 'G' : {
			cout << "Exercise 7 : integer divisible by 3 in range(1,100) " << endl;
			cout << "\t Skip 30 , 60 , 90" << endl << endl;
			int mynum;
			int N = 1; //endl , \n
			for(mynum=1;mynum<=100;mynum++){
				if(mynum%3==0){
					if(mynum==30 || mynum==60 || mynum==90){
						continue;
					}
					cout << "\t" << mynum; N++;
					if(N%8==0){ //\n optional
						cout << endl;
					}
				}
				else{
					continue;
				}
			}
			break;
		}
		case 'H' : {
			cout << "Exercise 8 : Max/Min of 7 inputted integers" << endl << endl;
			int INT[7];
			int i;
			for(i=0;i<7;i++){
				cout << "Enter a number " << i+1 << " : "; cin >> INT[i];
			}
			int max = INT[0];
			int min = INT[0];
			for(i=0;i<7;i++){
				if(max < INT[i]){ 
			//1st : use 1st element [0] compare to 1st element [i=0] make it equal to bool = 0 ; i++
			//2nd : use 1st element [0] compare to 2nd element [i=1] make it both 0/1 .....
					max = INT[i];
				}
				if(min > INT[i]){
					min = INT[i];
				}
			}
			cout << endl;
			cout << "Max : " << max << endl;
			cout << "Min : " << min << endl;
			break;
		}
		case 'I' : {
				cout << "Exercise 9 : Sum of inputted number " << endl << endl;  
			cout << "Note : press '0' to stop! " << endl << endl; 
			
			int NumIn[10000];
			int i; //index
			int plus = 0;
				for(i=0;;i++){
					cout << "Enter a number " << i+1 << " : "; cin >> NumIn[i];
					plus = plus + NumIn[i];
					if(NumIn[i]==0){
						break;
					}
				}
			cout << "Sum of these number is : " << plus;
			break;
		}
		case 'J' : {
				cout << "Exercise 10 : Book info" << endl << endl;
				for(I=0;I<7;I++){
					cout << "Enter name of author : "; fflush(stdin); getline(cin,AuthorN[I]);
					cout << "Enter the ISBN number : "; cin >> isbn[I];
					cout << "Enter the publish year : "; cin >> pY[I];
					cout << "Enter the price of book " << I+1 << " : $"; cin >> price[I];
					cout << endl;	
				}
				ISBN(isbn);
				cout << endl << endl;
				Display();
			break;
		}
		case 'K' : {
			cout << "Temperature Conversion " << endl << endl;
		    int n = 100000;
		    float Fah[n];
		    float Cel[n];
		    char key;
		        int i;
		        for(i=0;;i++){
		        	cout << endl << endl;
		        	cout << "Enter the Fahrenheit degree : "; cin >> Fah[i]; 
		        	Cel[i] = (Fah[i]-32)*5/9;
		        	cout << "\t Celsius degree = " << Cel[i] << endl << endl;
		        	cout << "Press enter to continue or any key to exit" << endl;
					//getch();
					if(getch()!=13){
						break;
					}	
				}
			break;
		}
		case 'L' : {
			cout << "Exercise 12 : Shopping list" << endl << endl;
			int m=10,i;
			string pro[m];
			int amount[m];
			
			for(i=0;i<m;i++){
				fflush(stdin);
				cout << "Enter the name of product : "; getline(cin,pro[i]);
				cout << "Enter the amount of " << pro[i] << " : "; cin >> amount[i];
				cout << endl;
			}
			cout << endl << endl;
			cout << "\tShopping list today" << endl;
			for(i=0;i<m;i++){
				cout << left << "- " << pro[i];
				cout << "\t\t" << right << amount[i] << endl;
			}
			break;
		}
		case 'M' : {
			cout << "Exercise 13 : Average grade " << endl << endl;
			
			cout << "Student : " << endl;
			for(j=0;j<5;j++){
				cout << "Enter the grade of exam " << j+1 << " : "; cin >> gr[j]; 
			}
			cout << endl;
			cout << "Average grade of these 5 exams : " << avg(gr);
			break;
		}
		case 'N' : {
				cout << "Exercise 14 : Contact list" << endl << endl;
			for(Ii=0;Ii<3;Ii++){
				cout << "Name : "; fflush(stdin); getline(cin,NameC[Ii]);
				cout << "Number : 0"; cin >> NumC[Ii];
				cout << endl; 
			}
			lAbeL :
			cout << endl << "Menu" << endl;
			cout << "\t 1. Add contact" << endl;
			cout << "\t 2. Search contact" << endl;
			cout << "\t 3. Display contact" << endl;
			int opt, T;
			cout << endl << "Enter opt : "; cin >> opt;
			switch(opt){
				case 1 : {
					cout << endl << "\t Add contact " << endl;
					Add();
					goto Label;
				}
				case 2 : {
					labeL :
					cout << endl << "\t Search contact " << endl;
					Sch();
					break;
				}
				case 3 : {
					Label :
					Dis();
					goto labeL;
					}
				default : goto lAbeL;
			}
			break;
		}
		case 'O' : {
			cout << "Exercise 15 : Task Tracker" << endl << endl;
			for(Jj=0;Jj<2;Jj++){
				cout << "Enter the ID of task : "; cin >> IDTask[Jj];
				cout << "Describe task [" << IDTask[Jj] << "] : "; fflush(stdin); getline(cin,Task[Jj]);
			}
			Menu :
			cout << endl << endl;
			cout << "\t a. Add tasks" << endl;
			cout << "\t b. Completed tasks" << endl;
			cout << "\t c. Display tasks" << endl;
			cout << "\t d. Exit" << endl << endl;
			char Optn;
			cout << "Enter the option : "; fflush(stdin); cin >> Optn;
			cout << endl;
			switch(Optn){
				case 'a' : {
					cout << "\t Add tasks" << endl;
					AddT();
					goto TDis;
				}
				case 'b' : {
					TCom :
					cout << "\t Completed tasks" << endl;
					ComT();
				}
				case 'c' : {
					TDis :
					cout << "\t Display tasks" << endl;
					DisT();
					goto TCom;
				}
				case 'd' : return 0;
				default : goto Menu;
			}
					break;
				}
		case 'P' : return 0;
		default : goto MenU;
	}//Switch
}//main

