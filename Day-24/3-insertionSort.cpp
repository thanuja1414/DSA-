#include<iostream>
using namespace std;

void insertionSort(vector<int>&nums){
    for(int i=1;i<nums.size();i++){
        int currElement = nums[i];
        int previousIdx = i-1;
        while(previousIdx>=0 && nums[previousIdx]>currElement){
            nums[previousIdx+1]=nums[previousIdx];
            previousIdx--;
        }
        nums[previousIdx+1] = currElement;

    }
}

int main(){
    vector<int>nums = {4,1,5,2,3};
    insertionSort(nums);
    for(int i: nums){
        cout<<i<<" ";
    }
    return 0;
}