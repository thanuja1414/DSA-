#include<iostream>
using namespace std;
vector<int> productOfArray(vector<int>nums){
    vector<int>ans(nums.size(),1); // ans = {1*24,1*12,2*4,6}; -> prefix values * suffix values

    int suffix = 1;

    for(int i=1;i<nums.size();i++){
        ans[i] = ans[i-1]*nums[i-1];
    }
    for(int i=nums.size()-2;i>=0;i--){
        suffix = suffix*nums[i+1]; // 4 , 12 , 24
        ans[i] = ans[i]*suffix;
    }
    return ans;
}
int main(){
    vector<int>nums = {1,2,3,4};
    vector<int>ans = productOfArray(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}