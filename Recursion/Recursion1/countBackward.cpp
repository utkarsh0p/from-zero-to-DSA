#include<iostream>
using namespace std;
void count(int a){
  if(a==0)return;
  count(a-1);
  //after the recursion call this chunk executes which is life of function after the recusion
  cout<<a<<endl;
}
int main(){
  int a;
  cin>>a;
  count(a);
}