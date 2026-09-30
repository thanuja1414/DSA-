#include<iostream>
#include<vector>
using namespace std;

int main(){
    pair<int,int>p ={2,9};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    pair<string,int>p2 ={"tanuja",6}; // use "" for a string and '' for a char

    //pair of pair
    pair<int, pair<char,int>>p3 = {1,{'a',4}};
    cout<<p3.first<<endl;
    //cout<<p3.second<<" "; -> gives error
    cout<<p3.second.second<<endl;
    

    //vector of pairs
    vector<pair<int,int>>vec ={{2,3},{3,4},{4,5}};

    vec.push_back({5,6}); // assumes we are already pushing a pair.(slower)->cant convert individual values into pairs.
    vec.emplace_back(6,7); // in-place objects are created at the time of insertion.(faster)

    for(pair<int,int>p : vec){
        cout<<p.first<<","<<p.second<<"  ";
    }
    // or 
    /*for(auto p : vec){
        cout<<p.first<<","<<p.second<<"  ";
    }*/
    

    return 0;
}