#include<list>
#include<iostream>
using namespace std;
int main(){
    //list is the implementaion of the doubly linked list from the stl
    //template library
    list<int> li = {2,3,4,5,1};
    

    //now these are the methods or the functions (usually such types are present in all the stl containeres)
    auto head = li.begin();
    auto it = next(li.begin());
    auto endTail = li.end();
    li.insert(endTail,0);

    //print the list using the iterators
    //* iterators can not print the address like (cout<<it <-not okay insted cout<<*it <-is okay)
    for(auto items : li){
        cout<<items<<"->";
    }
    cout<<endl<<"iterator->"<<*it;
    cout<<endl<<"head->"<<*head;
}