#include<iostream>
using namespace std;
int climbStair(int a){
  if(a==1)return 1;
  if(a==0)return 1;
  if(a<0)return 0;
  return climbStair(a-1)+climbStair(a-2);
}
int main(){
   int a;
   cin>>a;
  cout<<climbStair(a);
}