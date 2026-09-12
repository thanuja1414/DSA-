#include<iostream>
using namespace std;


//BigO(n^2) -> brute force approach
vector<int>pairSum(vector<int>nums,int target){
    vector<int>ans;

    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            // cout<<nums[i]<<nums[j]<<" ";
            if(nums[i]+nums[j]==target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    vector<int>nums = {2,7,11,15};
    int target = 9;
    vector<int>ans = pairSum(nums,9);
    cout<<ans[0]<<" , "<<ans[1]<<endl;
    
    return 0;
}