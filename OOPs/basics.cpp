#include<iostream>
using namespace std;
class Hero{
    // access modifiers ,getter,setter, and static and dynamic allocation
    private:
    int health;

    public:
    int gethealth(){
        return health;
    }

    int sethealth(int h){
        health = h;
    }

    //constructor  (1->non parameterized 2->parameterized)
    Hero(){  //-->mathces the name of the class
        cout<<"non parameterized constructor called \n";
    }
    
};


int main(){


    //statically allocating
    Hero sutkarsh;  // constructer calls
    sutkarsh.sethealth(99);
    //statically allocated object accessing
    cout<<"static Health is --> "<<sutkarsh.gethealth()<<endl;


    //dynamically allocating
    Hero *dutkarsh = new Hero; //costructor calls
    (*dutkarsh).sethealth(88);
    //dynaminc allocated object accessing
    cout<<"dynamic Health is --> "<<(*dutkarsh).gethealth()<<endl;
    cout<<"another way health access --> "<<dutkarsh->gethealth();


    //constructors
    //--> they do not have any return type
    //--> we can create own contructors


} 