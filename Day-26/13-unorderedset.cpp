#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){

    unordered_set<int>s;

    s.insert(2);
    s.insert(4);
    s.insert(5);

    for(int val:s){
        cout<<val<<endl;
    }
    
    return 0;
}