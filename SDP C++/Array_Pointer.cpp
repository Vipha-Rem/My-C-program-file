#include<iostream>
using namespace std;
int main(){
    int a1[4] = {3,6,8,6};
    int a2[] = {4,6,6,8,3,7};

    int *p;
    int *p1;

    p=a1; //a1 is array , we can use this
    p1=a2;

//  cout << p << endl; //output address
    cout << *p << endl; //output value
    cout << *(p+1) << endl;
    cout << *(p+2) << endl;
    cout << endl << endl;
    for(int i=0;i<4;i++){
        cout << *(p+i) << endl;
    }
    cout << endl << endl;
    for(int i=0;i<6;i++){
        cout << *(p1+i) << endl;
    }
}
