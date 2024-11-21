#include<iostream>
using namespace std;

int factorial(int n){ //get the value from num = 3
	if(n<=1){
		return 1;
	}
	else{
		return n*factorial(n-1); //operate til n=1
		//3*factorial(2) = 3*(2*factorial(1)) = 3*(2*(1))
	}
}

int main(){
	int num;
	cout << "Enter a number to operate the factorial : "; cin >> num;
	if(num<0){
		cout << "Error!" << endl;
	}
	else if(factorial(num) == 0){
		cout << "Does not exist" << endl;
	}
	else{
		cout << "Factorial of entered number : " << factorial(num);
		//paste num = 3 to int n (belong to func)
	}
	return 0;
}
