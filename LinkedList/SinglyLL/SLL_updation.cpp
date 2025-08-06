#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int givenData){
        data = givenData;
        next = nullptr;
    }
};
//----------updation code here---------------//

void updateAtN(Node* head, int value,int position){
    int count  = 1;
    while (count  != position){
        head = head->next;
        count += 1;
    }
    head->data = value;
}

//#deletion in the linked list 

void deleteAtN(Node*&head , int position){
    if(position==1){
        head=head->next;
        return;
    }
    int count = 1;
    while(count != position-1){
        head = head->next;
        count++;
    }
    Node* store = head->next->next;
    head->next = store;
}
//deletion of the last node (find the second last node)
// [node]----[node](use this)----[node]---NULL     //head->next->next == NULL



//------------insert and print---------------//
void insertAtHead(Node*&head , int data){
     Node* newNode = new Node(data);
     newNode->next = head ;
     head = newNode;
}

void print(Node* head){
    while(head !=NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL";
}
int main(){
     Node *head = NULL;
     insertAtHead(head,1);
     insertAtHead(head,2);
     insertAtHead(head,3);
     insertAtHead(head,4);
     insertAtHead(head,5);
     insertAtHead(head,6);
     insertAtHead(head,7);
     updateAtN(head,889,1);
     deleteAtN(head,2);
     deleteAtN(head,1);
     print(head);
}