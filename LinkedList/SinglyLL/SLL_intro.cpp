#include<iostream>
using namespace std;

class Node{
     public:
     int data;
     Node* next;

     Node(int a){
        data = a;
        next = nullptr;
     }
};

void insert(Node *&head , int a){
    Node *node = new Node(a);
    node->next = head;
    head = node;
}

void show(Node* temp){
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main(){
    Node *head = NULL;
    insert(head,4);
    insert(head,3);
    insert(head,2);
    insert(head,1);
    show(head);
}