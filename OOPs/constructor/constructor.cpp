#include<iostream>
using namespace std;
class Hero{

    public:
    int health=10;

    //Paremeterisec constructor
    Hero(int health){
        this->health=health;
        if(health>20){
            cout<<"you will survive";
        }
        else{
            cout<<"you will not survive";
        }
    }
};

int main(){
    Hero *utkarsh = new Hero(11);
    cout<<" because your health is --> "<<utkarsh -> health;
}