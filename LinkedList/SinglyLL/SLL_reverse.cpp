#include<iostream>
using namespace std;
class Node{
    public:
    int data ; 
    Node* next;

    Node(int val){
        data = val ;
        next = nullptr;
    }
};
void insertHead(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL";
}

void reverseLL(Node* &head){
    Node* previous = NULL;
    Node* current = head;
    
    while(current != NULL){
        Node* next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    Node* newHead = previous;
    head = newHead;
}

int main(){
    Node *head = NULL;
    insertHead(head , 34);
    insertHead(head , 33);
    insertHead(head , 32);
    insertHead(head , 31);
    insertHead(head , 30);
    reverseLL(head);
    print(head);
}