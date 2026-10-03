#include<iostream>
using namespace std;

void stringCompress(vector<char>chars){
    int freq=1;
    for(int i=1;i<=chars.size();i++){
        if(chars[i]==chars[i-1]){
            freq++; 
        }else{
            cout<<chars[i-1]<<""<<freq<<endl;
            freq=1;
        }
    }
}

int main(){

    vector<char>chars = {'a','a','b','b','c','c','c'};
    stringCompress(chars);

    return 0;
}