#include<iostream>
using namespace std;
void merge(int arr[], int s, int e, int mid){
   int A1size = mid - s + 1;
   int A2size = e - mid;
   int *A1 = new int[A1size];
   int *A2 = new int[A2size];

   int T = s;
   for(int i = 0 ; i < A1size ; i++ ){
    A1[i] = arr[T++];
   }
   for(int j=0 ; j < A2size ; j++){
    A2[j] = arr[T++];
   }

   int i=0;//for A1
   int j=0;//for A2
   int k=s;//for modifying arr

   while(i<A1size && j<A2size){
        if(A1[i]>A2[j])arr[k++]=A2[j++];
        else arr[k++]=A1[i++];
   }
   while(i<A1size)arr[k++]=A1[i++];
   while(j<A2size)arr[k++]=A2[j++];
}

void mergeSort(int arr[], int s, int e){
    if(s>=e)return;
    int mid = (s+e)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr, s, e, mid);
}

int main(){
    int arr[9]={ 10, 12, 3, 6 ,11 ,8 ,1 , 2 ,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int x : arr)cout<<x<<" ";
    mergeSort(arr, 0, size-1);
    cout<<endl;
    for(int x : arr)cout<<x<<" ";
}