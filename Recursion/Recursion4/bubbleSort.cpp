#include<iostream>
using namespace std;
void bubbleSort(int arr[],int size){
  if(size==0 || size==1)return;
  for(int i=0 ; i<size-1 ; i++){
  if(arr[i]>arr[i+1])swap(arr[i],arr[i+1]);
  }
  bubbleSort(arr,size-1);
}
int main(){
  int arr[]={3,5,6,8,2,1,7};
  int size=7;
  bubbleSort(arr,size) ;
  for(int x : arr){
    cout<<x<<" ";
  }
}