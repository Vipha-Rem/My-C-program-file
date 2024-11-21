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

//int* ptr = &a; for pointer reference
List* createEmptyList(){ //return address, similar to function : use to operate sth
    List* L1; //pointer stores the address
    L1 = new List; //return address , use to allocate the memory
    L1 -> s = 0; //size of list = 0
    L1 -> head = NULL;
    L1 -> tail = NULL;

    return L1; //return address cuz head / tail are addresses
}

//void addToList(List* L1, int newData){ //input the element
//    Element *t;
//    t = new Element;
//    t -> data = newData;
//    t -> next = NULL;

//    cout << t->data << endl;
//    t = t -> next;
/*    while(t!=NULL){
        cout << t->data << endl;
        t = t->next;
    }
*/
//}

//void addList_end(List* L1, int newData){
//    Element *t;
//    t = new Element;
//    t -> data = newData;
//    t -> next = NULL;
//
//    if(L1->s == 0){
//        L1 -> head = t;
//        L1 -> tail = t;
//        L1 -> s = L1->s+1;
//    }
//    else{ //when list is not empty
//    //making the current last element connects to the new element
//        //L1 -> head = t;
//        L1 -> tail -> next = t; //connection
//        L1 -> tail = t;
//        L1 -> s = L1->s+1;
//    }
//}

void addList_begin(List* L1,int newData){
    Element *d;
    d = new Element;
    d ->data = newData;
    d ->next = NULL;
    if(L1->s == 0){
        L1 -> head = d;
        L1 -> tail = d;
        L1 -> s = L1->s+1; //L1->s++;
    }
    else{ //when list is not empty

        d ->next = L1->head;
        L1 ->head = d;
        L1 -> s = L1->s+1;
    }
}
//void deleteBegin(List* L1){
//    if(L1->s == 0){
//        cout << "No data to delete" << endl;
//    }
//    else if(L1->s == 1){
//        Element *p
//        p = L1->head;
//        L1->head = NULL;
//        L1->tail = NULL;
//
//        delete p;
//        L1->s = 0;
//    }
//    else if(L1->s > 1){
//        Element *p;
//        p = L1->head;
//        L1->head = L1
//    }
//}

//singly linked list
int main(){

    List* myList1;
    myList1 = createEmptyList();

/*    myList1 -> head = t;
    myList1 -> tail = s;
    myList1 -> s = 3; //3 elements
*/
//    addToList(myList1,100);
//    addToList(myList1,200);
//    addToList(myList1,300);

//    addList_end(myList1,200);
//    addList_end(myList1,300);
//    addList_end(myList1,900);

    addList_begin(myList1,800);

    Element *p = myList1 -> head;
    while(p!=NULL){
        cout << p->data << endl;
        p = p->next;
    }
    //myList1->head;
}
