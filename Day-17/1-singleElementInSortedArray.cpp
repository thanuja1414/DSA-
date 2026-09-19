#include<iostream>
using namespace std;

// TC-O(n)
int singleElement(vector<int>nums){
    for(int i=1;i<nums.size()-1;i++){
        if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){
            return nums[i];
        }
    }
    return -1;
}
int main(){
    vector<int>nums = {1,1,2,3,3,4,4,8,8};
    cout<<singleElement(nums)<<endl;
    return 0;
}