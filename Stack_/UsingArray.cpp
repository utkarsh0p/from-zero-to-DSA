#include<iostream>
using namespace std;
class Stacks {
    int top;
    int* arr;
    int capacity;

    public:
    Stacks(int c){
        this->capacity = c;
        top = -1;
        arr = new int[c];
    };

    void push(int value){
        if(this->top == this->capacity-1){
            cout<<"overflow";
            return;
        }
        this->top++;
        this->arr[this->top]=value;
    }

    void pop(){
        if(this->top == -1){
            cout<<"underflow"<<endl;
            return;
        }
        this->top--;
        cout<<"deleted"<<endl;
    }

    void atTop(){
        if(this->top == -1){
            cout<<"underflow"<<endl;
            return;
        }else{
            cout<<this->arr[this->top];
        }
    }

    bool isEmpty(){
       return this->top == -1;
    }

    int size(){
        return this->top+1;
    }

    int isFull(){
         return this->top == this->capacity-1;
    }

    void print(){
        int* ptr = arr;
        int a = top+1;
        while (a--){
            cout<<*ptr<<"->";
            ptr++;
        }
    }
};

int main(){
    Stacks S(4);
    S.push(3);
    S.push(65);
    S.push(21);
    S.push(54);
    S.print();
}