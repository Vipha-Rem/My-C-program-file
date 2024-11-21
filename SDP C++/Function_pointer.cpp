#include<iostream>
#include<iomanip>
using namespace std;

void exchangeNUM(int *num1 , int *num2){
    int *temps;
    int temp2;
  temps = num1; //output the address
    num1 = num2;
    num2 = temps;
    cout << num1 << setw(10) << num2 << endl;
    temp2 = *num1;
    *num1 = *num2;
    *num2 = temp2;
    cout << *num1 << setw(10) << *num2 << endl; //output the value
}
int main(){
    int n1=12;
    int n2=43;
    exchangeNUM(&n1,&n2);
}
