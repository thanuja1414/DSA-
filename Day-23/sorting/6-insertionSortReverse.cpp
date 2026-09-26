#include<iostream>
using namespace std;


//TC-O(n^2)
void insertionSort(vector<int>&nums){

    for(int i=1;i<nums.size();i++){
        int curr = nums[i];
        int prev = i-1;
        while(prev >=0 && nums[prev]<curr){ 
            nums[prev+1]=nums[prev];
            prev--;
        }
        nums[prev+1]=curr; // placing curr element in its correct position.
    }

}
int main(){
    vector<int>nums = {4,1,5,2,3};
    insertionSort(nums);
    for(int i : nums){
        cout<<i<<" ";
    }
    return 0;
}