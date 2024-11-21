#include<iostream>
using namespace std;

struct Element{
    int data;
    Element* next; //link to the next element
};

struct List{
    int s; //size of list = number of element
    Element* head; //pointer point to 1st element
    Element* tail; //pointer point to nth element
};
//singly linked list
int main(){

/*    myList1 -> head = t;
    myList1 -> tail = s;
    myList1 -> s = 3; //3 elements
*/

    Element *t; //t is pointer
    t = new Element; //new address of t create a new space for Element in RAM
    t->data = 70; //int data = 70;
    t->next = NULL; //t point to NULL => that element is last element

    //add a new element at the last position
    Element *e; //e is pointer
    e = new Element;
    e->data = 80;
    e->next = NULL; //e become last element

    Element *s; //last element
    s = new Element;
    s->data = 50;
    s->next = NULL;

    //logic part
    t->next = e; //reference of next element e
    e->next = s; //reference of next element s

    while(t != NULL){
        cout << t->data << endl; //cout data
        t = t -> next; //cout e
    }
}
