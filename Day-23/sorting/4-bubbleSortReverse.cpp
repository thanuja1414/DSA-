#include<iostream>
using namespace std;



//TC - O(n^2)
void bubbleSort(vector<int>&nums){
    for(int i=0;i<nums.size()-1;i++){
        bool isSwapped = false;
        for(int j=0;j<nums.size()-i-1;j++){
            if(nums[j]<nums[j+1]){
                swap(nums[j],nums[j+1]); // swap function - built in
                isSwapped = true;
            }
        }

        if(!isSwapped){ // array is already sorted
            return;
        }
    }
}
int main(){
    vector<int>nums = {4,1,5,2,3};
    bubbleSort(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

//note : bubble sort runs even on a sorted array for O(n^2) time complexity, so thats gonna be a waste , so we case use a optimization.