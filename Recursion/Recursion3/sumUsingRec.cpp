#include<iostream>
using namespace std;
int addedAns(int arr[],int sum,int size){
  if(size==0)return sum;
  return addedAns(arr+1,sum+arr[0],size-1);
}
int main(){
  int arr[]={30,4,2,5,6,7};
  int size=6;
  int sum=0;
  cout<<addedAns(arr,sum,size);
}