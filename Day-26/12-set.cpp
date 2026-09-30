#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int>s;

    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(5);
    s.insert(4);


    cout<<s.size()<<endl;
    cout<<*(s.lower_bound(4))<<endl; // we must dereference -> output 5
    cout<<*(s.upper_bound(4))<<endl; // output->5

    cout<<*(s.lower_bound(6))<<endl; // s.end() -> output(invalid answer)

    for(int val:s){
        cout<<val<<" "; // 1 2 3 4 5
    }
    return 0;
}