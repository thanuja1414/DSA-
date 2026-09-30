#include<iostream>
#include<map>
using namespace std;


int main(){

    map<string ,int>map;
    //a normal map wouldnt allow such duplicates
    map.emplace("mobile",100);
    map.emplace("mobile",100);
    map.emplace("mobile",100);
    map.emplace("mobile",100);

    for(auto p:map){
        cout<<p.first<<":"<<p.second<<endl;
    }


    multimap<string ,int>multimap;
    //a normal map wouldnt allow such duplicates
    multimap.emplace("tv",100);
    multimap.emplace("tv",100);
    multimap.emplace("tv",100);
    multimap.emplace("tv",100);
    

    //find -> finds the key-value pairs -> if found: returns the iterator else: returns the map.end()
    multimap.erase(multimap.find("tv")); // one instance of tv is erase from memory location.

    //multimap.erase("tv");

    for(auto p:multimap){
        cout<<p.first<<":"<<p.second<<endl; 
    }

    return 0;
}