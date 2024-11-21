#include<iostream>
using namespace std;

int factorial (int n){
	if(n==0 || n==1){
		return 1;
	}
	else{
		return (n-1)*n;
	}
}
int main(){
	int result;
	int p=5;
	result = factorial(p);
	
	cout << p << "! = " << result;
}
