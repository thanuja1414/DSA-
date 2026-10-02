#include<iostream>
#include<vector>
using namespace std;
//removing occurences of substrings
string removeOccurences(string s,string part){

    while(s.length()>0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){

    string s = "daabcbaabcbc";
    string part = "abc"; // remove occurences of "abc" in the given string. so output:dab
    cout<<removeOccurences(s,part);
    return 0;
}