#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
// int main(){
//   map<int,string>m;
//   m[0]="zero";
//   m[1]="one";
//   m[2]="two";
//   m[3]="three";
//   m[4]="four";
//   m[5]="five";
//   m[6]="six";
//   m[7]="seven";
//   m[8]="eight";
//   m[9]="nine";
//   int a;
//   cin>>a;
//   vector<string>str;
//   vector<int>integer;
//   for(int i=a ; i>0 ; i/=10){
//     integer.push_back(i%10);
//   }
//   reverse(integer.begin(),integer.end());
//   for(int c:integer){
//     cout<<m[c]<<" ";
//   }
// }



/***************************************************************/
//this is using the recursion
void sayN(int a,string str[]){
  if(a==0)return;
  int N=a%10;
  a/=10;
  sayN(a,str);
  cout<<str[N]<<" ";
}
int main(){
string str[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int a;
cin>>a;
sayN(a,str);
}