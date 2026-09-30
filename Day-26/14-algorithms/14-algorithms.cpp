#include<iostream>
#include<vector>
using namespace std;

bool comparators(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second){
        return true;
    }if(p1.second>p2.second){
        return false;
    }
    // if second values are same , then sort according to first value in pair
    if(p1.first<p2.first){
        return true;
    }else{
        return false;
    }
}


int main(){

    int arr[5] ={2,5,6,1,-1};
    vector<int>vec = {2,5,1,6,9,-1};
    vector<pair<int,int>>pairVec= {{3,7},{4,5},{3,4},{2,4}}; // generally pairs are sorted based on their 1st value in pair , so sort them base on second value in pair we have to use custom comparators.

  
    sort(arr,arr+5);

    sort(vec.begin(),vec.end()); // ascending order

    sort(vec.begin(),vec.end(),greater<int>()); // descending order

    sort(pairVec.begin(),pairVec.end());

    sort(pairVec.begin(),pairVec.end(),comparators); // sorted in ascending order based on second value


    for(int val:arr){
        cout<<val<<endl;
    }
    cout<<endl;

    for(int val : vec){
        cout<<val<<endl;
    }

    for(auto p : pairVec){
        cout<<p.first<<","<<p.second<<endl;
    }

    
    return 0;
}