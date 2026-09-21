#include<iostream>
using namespace std;

int majorityElement(vector<int>&arr){
    for(int val:arr){
        int freq=0;
        for(int ele:arr){
            if(val==ele){
                freq++;
            }
        }
        if(freq>arr.size()/2){
            return val;
        }
    }
    return -1;
}
int main(){

    vector<int> arr = {1,2,2,1,1};
    cout<<majorityElement(arr);
    return 0;
}