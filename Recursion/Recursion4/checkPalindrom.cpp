#include<iostream>
using namespace std;
void print(string str,int start,int end){
  for(; start<=end ; start++){
    cout<<str[start]<<" ";
  }
}
bool isPalindrom(string str,int start ,int end){
  
  print(str,start,end);
  cout<<endl;
  
  if(start>end)return true;
  if(str[start]!=str[end])return false;
  return isPalindrom(str,start+1,end-1);
}

int main(){
  string str="abbbccbbba";
  cout<<isPalindrom(str,0,str.size()-1);
}