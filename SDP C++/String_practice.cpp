#include<iostream>
#include<string.h>
//#include<cmath> //<math.h>
using namespace std;
int main(){
//	string name = "vgdfgd";
//	cout << "dfhfdvgvdyfgue";
//	cout << endl << name;
//	cout << endl << max(56,22);
//	cout << endl << sqrt(4);
//	cout << endl << abs(-4);
	
//	int a = 10;
//	string b = "20";
//	int c = a+b; // error
//	cout << c << endl;
	
//	string x = "10";
//	string y = "20";
//	string z = x + y;
//	cout << z << endl;
//	int d = int(x) + int(y); //error
//	cout << d << endl;

//	string str = "hgfgsvfhs";
//	cout << str.length() << endl;
//	cout << str[2] << endl; //mystring

	string nameF;
	string nameL;
	int age;
	cout << "Enter your first name : "; getline(cin,nameF);
	cout << "Enter your last name : "; getline(cin,nameL);
	cout << "Enter your age : "; cin >> age;
	cout << endl << "Welcome Mr. " << nameF + " " + nameL << endl;
	cout << "You are " << age << " years old" << endl; 	
}

