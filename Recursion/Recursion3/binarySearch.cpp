#include<iostream>
using namespace std;


void print( int arr[], int start , int end){
  for(int i=start ; i<=end ; i++){
    cout<<arr[i]<<" ";
  }
}


int binarySearch(int arr[] , int start , int end , int key){
  cout<<endl;
  print(arr,start,end);
  int mid= (start+end) / 2;
  if(arr[mid]==key)return 1;
  if(start > end)return 0;

   if(arr[mid]>key)return binarySearch(arr,start,mid-1,key);
   else return binarySearch(arr, mid+1 , end, key);
}

int main(){
  
  int arr[]={3,5,6,7,8,9,33,44,55};
  int start = 0;
  int end = 8;
  int key;cin>>key;
  if(binarySearch(arr , start , end, key)){
    cout<<endl;
    cout<<"present";
  }
  else cout<<"not present";
  
}