#include<iostream>
using namespace std;
bool sortedOrNot(int arr[],int size){
  if(size==0||size==1)return true;
  if(arr[0]>arr[1]){
    return false;
  }
  return sortedOrNot(arr+1,size-1);
}
int main(){
  int arr[]={3,53,25,26,27,28};
  int size=6;
  bool x=sortedOrNot(arr,size);
  if(x)cout<<"it is a sorted array";
  else cout<<"not sorted array";
}