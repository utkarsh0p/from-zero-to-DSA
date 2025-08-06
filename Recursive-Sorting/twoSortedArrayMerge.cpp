#include<iostream>
using namespace std;
#include<vector>
vector<int> merge(vector<int>&v1,vector<int>&v2){
  int size=v1.size()+v2.size();
  vector<int>v(size);
  int k=0;
  int i=0;
  int j=0;
  while(k<size && i<v1.size() && j<v2.size()){
    if(v1[i]>v2[j]){
      v[k++]=v2[j++];
    }
    else{
      v[k++]=v1[i++];
    }
  }

  while(i<v1.size())v[k++]=v1[i++];
  while(j<v2.size())v[k++]=v2[j++];
  return v;
}

int main(){
  vector<int>v2={3,4,5,5,8,10};
  vector<int>v1={1,4,6,90};
  vector<int>v=merge(v1,v2);
  for(int x : v){
    cout<<x<<" ";
  }

}