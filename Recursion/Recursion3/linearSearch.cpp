#include<iostream>
using namespace std;
int search(int arr[],int a,int size){
  if(size==0)return 0;
  if(arr[0]==a){
    return 1;
  }
  else{
    return search(arr+1,a,size-1);
  }
}

int main(){
  int arr[]={4,5,3,6,7,2,8};
  int a;
  cin>>a;
  int size=7;
  cout<<search(arr,a,size);
}