#include<iostream>
using namespace std;


void bubbleSort(vector<int>&nums){
    for(int i=0;i<nums.size()-1;i++){
        bool isSwapped = false;
        for(int j=0;j<nums.size()-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                isSwapped = true;
            }
        }
        if(!isSwapped){
            return;
        }
    }
}
int main(){
    vector<int>nums = {4,1,5,2,3};
    bubbleSort(nums);
    for(int i:nums){
        cout<<i<<" ";
    }

    return 0;
}