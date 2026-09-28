#include<iostream>
using namespace std;

//merge elements into the first array , instead of 0's replace them with the elements in second array.
// TC-O(nlogn)
void mergeArrays(vector<int>&nums,vector<int>&nums2){
    int j=0;
    for(int i=0;i<nums.size();i++){  
        if(nums[i]==0){
            nums[i]=nums2[j];
            j++;
        }
    }
    sort(nums.begin(),nums.end());
}
int main(){

    vector<int>nums = {1,2,3,0,0,0};
    vector<int>nums2 = {2,5,6};
    mergeArrays(nums,nums2);
    for(int i:nums){
        cout<<i<<" ";
    }
    return 0;
}