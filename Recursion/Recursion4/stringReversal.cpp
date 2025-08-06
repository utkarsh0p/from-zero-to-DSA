#include<iostream>
#include<algorithm>
using namespace std;
string reverseString(string str,int i , int j){
  if(i>j)return str;
  swap(str[i],str[j]);
  i++;
  j--;
  return reverseString(str,i,j);
}
int main(){
  string str = "utkarshsingh";
  int i = 0;
  int j = str.size()-1;
  cout<<reverseString(str,i,j);
}