#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;


int main(){

    unordered_map<string ,int>map;
    //a normal map wouldnt allow such duplicates
    map.emplace("tv",100);
    map.emplace("watch",40);
    map.emplace("laptop",120);
    map.emplace("cam",100);

    for(auto p:map){ // key:value pairs displayed in random order
        cout<<p.first<<":"<<p.second<<endl;
    }
    return 0;
}