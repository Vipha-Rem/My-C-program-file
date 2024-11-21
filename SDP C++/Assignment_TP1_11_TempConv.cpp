#include<iostream>
using namespace std;
int main(){
    cout << "Temperature Conversion " << endl << endl;
    float  Fah[];
    float Cel[];
    do{
        int i = 0
        cout << endl << endl;
        cout << "Enter the Fahrenheit degree : "; cin >> Fah[i]; i++;
        Cel[i] = (Fah[i]-32)*5/9;
        cout << "\t Celsius degree = " << Cel[i] << endl << endl;
        cout << "Press enter to continue or any key to exit" << endl;
        getch();
    }while(getch()==13);
    return 0;
}
