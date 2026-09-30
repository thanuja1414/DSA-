#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    list<int>l;

    l.push_back(1);
    l.emplace_back(2);
    l.emplace_back(4);
    l.push_back(3);
    l.push_front(5);
    l.pop_front();

    for(int val:l){
        cout<<val<<" ";
    }
    cout<<endl;

    //cout<<l[0]<<endl; //error: type 'list<int>' does not provide a subscript operator-> random access is not possible
    
    return 0;
}