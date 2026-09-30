#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int>map;
    map["tv"]=50;
    map["laptop"]=100;
    map["mobile"]=50;
    map["tablet"]=120;
    map["watch"]=60;

    map.emplace("camera",25);

    map.erase("tv");

    for(auto p:map){ // since there are two items , we can use pairs to display them.
        cout<<p.first<<" : "<<p.second<<endl; // the key:value pairs in map are sorted in lexicographical ascending order.
        
    }
    

    cout<<"count of instances="<<map.count("laptop")<<endl; // no of keys existing in map-> instances of laptop is 1.
    cout<<"count of items="<<map["laptop"]<<endl;

    //find -> finds the key-value pairs -> if found: returns the iterator else: returns the map.end()
    if(map.find("camera")!=map.end()){
        cout<<"camera found\n";
    }else{
        cout<<"camera not found\n";
    }
    return 0;
}