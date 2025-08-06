#include<iostream>
using namespace std;
class Node{
    public:
     int data;
     Node* previous;
     Node* next;

     Node( int value ){
        data = value;
        previous = NULL;
        next = NULL; 
     }
};

class D{
    public:
    Node* head ;
    Node* tail ;
    
    D(){
        head = NULL;
        tail = NULL;
    }

    //new node at the start
    void insertAtHead(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            tail = newNode; 
            return;
        }

        newNode->next = head;
        head->previous = newNode;
        head = newNode;
        return;
    }
    

    //new node at the end
    void insertAtLast(int value){
         Node* newNode = new Node(value);
         if(tail == NULL){
            head = newNode;
            tail = newNode;
            return;
         }
         tail->next = newNode;
         newNode -> previous = tail;
         tail = newNode;
         return;
    }


    void print(){
        Node *temp = head;
         while(temp != NULL){
            cout<<temp->data<<"<=>";
            temp = temp->next;
         }
    }
};
int main(){
    cout<<"NULL<=>";
    D doublyLL;
    doublyLL.insertAtHead(32);
    doublyLL.insertAtHead(33);
    doublyLL.insertAtHead(34);
    doublyLL.insertAtHead(35);
    doublyLL.insertAtLast(69);
    doublyLL.print();
    cout<<"NULL";
}