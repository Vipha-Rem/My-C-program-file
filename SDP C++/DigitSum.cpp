#include<iostream>
using namespace std;
int digitSum(int number){ //54
    if(number < 10){
        return number; //digitSum = 54
    }
    else{
        return number%10 + digitSum(number/10);
        //54%10 + digitSum(54/10) = 4 + digitSum(5) = 4+5 = 9
    }
}
int main(){
    int num;
    cout << "Enter a positive integer : "; cin >> num; //54
    int sum = digitSum(num); //digitSum(54);
    //different from number of digits
    cout << "Sum of digits = " << sum << endl;
    return 0;
}
