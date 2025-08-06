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

// inserting at the starting of the linked list
void insertAtHead(Node*&previousNode, int data){
    Node *newNode = new Node(data);
    newNode->next = previousNode;
    previousNode = newNode; 
}
// inserting at the end of the linked list
void insertAtLast(Node *temp,int data){
   Node* lastEntry = new Node(data);
   while(temp->next != NULL){
    temp = temp->next;
   }
    lastEntry->next = NULL;
    temp->next = lastEntry;
}
// inserting at the nTH place in the linked list
void insertAtN(Node *&head, int data, int place){
    Node *temp = head;
    Node *newNode = new Node(data);
    if(place == 1)
    {
        insertAtHead(head , data);
        return;
    }

    int count = 1;
    while(count != place-1){
     count += 1;
     temp=temp->next;
    }
    newNode->next = temp->next;
   temp->next = newNode;
}


void print(Node *head){
    while(head != NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL";
}
int main(){
    Node *node = NULL;
    insertAtHead(node , 21);
    insertAtHead(node,32);
    insertAtHead(node , 31);
    insertAtLast(node,10);
    insertAtLast(node,3);
    insertAtN(node,0,6);
    insertAtN(node,69,1);
    print(node);
}