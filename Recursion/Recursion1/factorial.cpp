#include<iostream>
using namespace std;
void count(int a){
  if(a==0)return;
  cout<<a<<endl;
  count(a-1);
}
int main(){
  int a;
  cin>>a;
  count(a);
}