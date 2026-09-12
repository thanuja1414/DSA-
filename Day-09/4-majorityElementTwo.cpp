#include<iostream>
using namespace std;

//O(nlogn + n)
int majorityElement(vector<int>& nums) {
    
    int freq = 1,ans=nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }else{
            freq=0;
            ans = nums[i];
        }
        if(freq>nums.size()/2){
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int>nums = {1,2,2,1,1};
    sort(nums.begin(),nums.end()); //nlogn
    cout<<majorityElement(nums);
    return 0;
}