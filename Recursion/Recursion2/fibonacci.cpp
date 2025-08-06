#include<iostream>
using namespace std;
int  fibo(int tt){
  if(tt==1)return 0;
  if(tt==2)return 1;
  return fibo(tt-1)+fibo(tt-2);
}
int main(){
  int tt;
  cin>>tt;
  cout<<fibo(tt);
  
}