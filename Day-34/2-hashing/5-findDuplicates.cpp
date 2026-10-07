#include<iostream>
#include<unordered_set>
using namespace std;

//TC-O(n) , SC-O(n)
int repeatedNum(vector<int>&nums){

    unordered_set<int>s; // for n no.of elements  we are storing n no.of new elements we are storing again in new set , so O(n) SC.

    /*
    
    int a;

    for(int i=0;i<nums.size();i++){
        if(s.find(nums[i])!=s.end()){
            a=nums[i];
            break;
        }
        s.insert(nums[i]);
    }
    return a;

    */

    for(int val:nums){
        if(s.find(val)!=s.end()){
            return val;
        }
        s.insert(val);
    }
    return -1;
}

int main(){
    vector<int>nums = {3,1,3,4,2};
    cout<<repeatedNum(nums)<<endl;
    return 0;
}