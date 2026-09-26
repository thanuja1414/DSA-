#include<iostream>
using namespace std;

//TC-O(n^2)
void selectionSort(vector<int>&nums){
    for(int i=0;i<nums.size()-1;i++){
        int smallestIdx = i; // unsorted part starting index
        for(int j=i+1;j<nums.size();j++){
            if(nums[smallestIdx] < nums[j]){
                smallestIdx = j;
            }
        }
        swap(nums[i],nums[smallestIdx]);
    }
}
int main(){
    vector<int>nums = {4,1,5,2,3};
    selectionSort(nums);
    for(int i : nums){
        cout<<i<<" ";
    }
    return 0;
}