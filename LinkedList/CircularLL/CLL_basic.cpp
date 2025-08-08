#include<iostream>
using namespace std; 
class Node{
    public:
    int data;
    Node* next;  

    Node(int value){
        next = NULL;
        data = value;
    }  
};

class circularLinkedList{
     public:
     Node* head;

     circularLinkedList(){
        head = NULL;
     }

     void insert(int value){
         Node* new_node  = new Node(value);
        if(head == NULL){
            head = new_node;
            new_node->next = head;
            return;
        }else{ 
            Node* tail = head;
            while(tail->next != head){
                tail = tail->next;
            }

            tail->next = new_node;
            new_node->next = head;
            head = new_node;
        }
     }

     void print(){
        Node* tail = head;
        while(tail ->next != head){
            cout<<(tail->data)<<"->";
            tail = tail->next;
        }
     }
    //  do{
    //         cout<<tail->data<<"->";
    //         tail = tail->next;
    //     }while(tail != head);
    // }
};
int main(){
       circularLinkedList* cll = new circularLinkedList();
       
       cll->insert(45);
       cll->insert(32);
       cll->insert(43);
       cll->insert(22);
       cll->print();
}