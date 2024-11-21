#include<iostream>
using namespace std;
int main(){
    int *p;
    int *a;
    int b = 10;

    a = &b;
    p = a;

    cout << b << endl;
    cout << a << endl;

    float f1 = 10.5;
    int n1 = 100;

    int *p1;
    float *p2;

    p2 = &f1;  //float_same both
    *p2 = 0; //change f1 value by p2

    cout << f1 << endl;

    float f2 = 100;
    float *p3 = &f2;
    f2 = f1 + 5;
    p2 = &f1;


    cout << p3 << endl << *p2 << endl;
}
