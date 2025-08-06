#include<iostream>
using namespace std;
class Hero{
    public:
    int health=10;
    int age=21;
    

    // parameterised constructor
    Hero(int health){
        this->health = health;
    }


    //copy constructor
    Hero(Hero values){
        cout<<values.age<<"called";

    }


    Hero(){
        cout<<"contructor 2 called";
    }
    int gethealth(){
        return health;
    }

    void print(){
        cout<<this->health;
    }
};

int main(){
    Hero priyanshu(69);
    priyanshu.print();
    cout<<endl;
    Hero utkarsh(priyanshu);
    utkarsh.print();
}