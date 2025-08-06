#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int input){
        data = input;
        next = nullptr;
    }
};
void insertHead(Node *&head, int data){
     Node *temp = new Node(data);
     temp->next = head;
     head = temp;
}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL";
}


// -------------Remove the duplicate --------------------//

void removeDuplicate (Node* head){
   while(head != NULL && head->next != NULL){
    if(head->data == head->next->data){
        head->next= head->next->next;
     }
     else{
        head = head->next;
     }
   }
}
//Printing the reverse of the linked list using recursion 
void reversePrint(Node* head){
    if(head == NULL){cout<<"NULL->";return;}
    reversePrint(head->next);
    cout<<head->data<<"->";
    return;
}

int main(){
      Node* head = NULL;
      insertHead(head,1);
      insertHead(head,2);
      insertHead(head,3);
      insertHead(head,4);
      insertHead(head,4);
      insertHead(head,4);
      insertHead(head,5);
      insertHead(head,5);
      insertHead(head,8);
      removeDuplicate(head);
      reversePrint(head);
    //   print(head);
}