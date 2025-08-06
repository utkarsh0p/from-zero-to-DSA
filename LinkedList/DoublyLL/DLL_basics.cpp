#include<iostream>
using namespace std;
class Node{
    public:
     int value;
     Node* prev;
     Node* next;

     Node(int data){
        value = data;
        prev = NULL;
        next = NULL;
     }
};

//doubly linked list inserting the node at the start

class doublyLL{
    public:
    Node* head ;
    Node* tail ;

    doublyLL(){
        head = NULL;
        tail = NULL;
    }

    void insertHead(int data){
       Node* newNode = new Node(data);
       if(head == NULL){
          head = newNode;
          tail = newNode;
          return;
       }
       newNode->next = head;
       head->prev= newNode;
       head = newNode;
       return;
    }
    //printing function of the dLL
    void print(){
        while(head != NULL){
            cout<<head->value<<"<---->";
            head = head->next;
        }
    }
};


int main(){
    doublyLL *dLL = new doublyLL();
    dLL->insertHead(3);
    dLL->insertHead(7);
    dLL->insertHead(34);
    dLL->print();
}