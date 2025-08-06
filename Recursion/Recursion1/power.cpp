#include<iostream>
using namespace std;
//function
int power(int a){
  if(a==0)return 1;
  //recursive relation 
  return 2*power(a-1);
}

int main(){
  int a;
  cin>>a;
  cout<<power(a);
}