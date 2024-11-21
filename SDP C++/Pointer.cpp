#include<iostream>
using namespace std;
int main(){
    int m = 3;
    int n = 7;
    cout << "m = " << m << ", &n = " << &m << endl;
    cout << "n = " << n << ", &n = " << &n << endl;
    int *p1; // p1 is a pointer, point to int
    p1 = &m; //p1 = address value of m, point to address of m
    cout << "p1 = " << p1 << endl;
    m = 40;
    cout << "p1 = " << p1 << endl; // *p1 = &m
    cout << "*p1 = " << *p1 << endl;  //*(*p1) = m
    //*p1 = dereference print the value out

    /* when we change the value of the an variable,
        the address don't change unless we change the variable */


    return 0;
}
