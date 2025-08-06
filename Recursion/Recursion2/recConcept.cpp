//not a problem just the concept that how the problem is solve recursively in smaller one and solved finally

#include<iostream>
using namespace std;
void Home( int source , int destination){
  cout<<"source --> "<<source<<"   destination --> "<<destination<<endl;
  if(source == destination ){
    cout<<"reached home";
    return;
  }
  Home(source+1,destination);
}

int main(){
  int source = 0 ;
  int destination = 5;
  Home(source,destination);
}