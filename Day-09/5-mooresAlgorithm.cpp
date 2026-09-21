#include<iostream>
using namespace std;


//BigO(n)
int majorityElement(vector<int>nums){
    int freq = 0,ans=0;
    for(int i=0;i<nums.size();i++){
        if(freq==0){ // The current candidate has no remaining votes, so choose the current element as the new candidate.
            ans=nums[i];
        }
        if(nums[i]==ans){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int>nums = {1,2,2,1,1};
    cout<<majorityElement(nums);
    return 0;
}