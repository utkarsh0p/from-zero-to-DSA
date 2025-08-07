#include<iostream>
using namespace std;
class Node{
    public:
      int data;
      Node* next;
      Node* prev;

      Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
      }
};

class DLL{
  public:
     Node* head;
     Node* tail;
     
     DLL(){
        head = NULL;
        tail = NULL;
     }

     void insert(int value){
       Node* frontNode = new Node(value);
      if(head == NULL){
        head = frontNode;
        tail = frontNode;
        return;
      }
      else{
      head->prev = frontNode;
      frontNode->next = head;
      head = frontNode;
     }
    }


    // insert at the last the sturcture would be something like this
    // NULL<--->[node](head)<--->[node]<--->[node](tail)<--->NULL

    void insertEnd(int value){
      Node* endNode = new Node(value);
       if(tail == NULL){
          tail = endNode;
          head = endNode;
       }
       else{
        tail->next = endNode;
        endNode->prev = tail;
        tail = endNode;
       }
    }

    void print(){
      while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
      }
    }
};


int main(){
  DLL*head = new DLL();
  head->insert(3);
  head->insert(4);
  head->insert(21);
  head->insertEnd(0);
  head->print();
}