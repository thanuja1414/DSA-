#include<iostream>
using namespace std;

// TC -O(n) , SC-O(1)
void nextPermutation(vector<int>&nums){
    int pivot = -1;
    
    for(int i=nums.size()-2;i>=0;i--){ // finding pivot , we took from n-2 becoz n-1 element doesnt have next element.
        if(nums[i]<nums[i+1]){
            pivot = i;
            break;
        }
    }

    if(pivot == -1){ // if the given array has no next pivot , reverse the array -> ex : [5,4,3,2,1]
        reverse(nums.begin(),nums.end());
        return;

        //or 
        /*
        int i=0,j=nums.size()-1;
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;

            or 

            swap(nums[i++],nums[j--]);
        }
        */
    }

    for(int i=nums.size()-1;i>pivot;i--){ // swapping pivot value with next greater number.
        if(nums[i]>nums[pivot]){
            swap(nums[i],nums[pivot]);
            break;
        }  
    }

    // reverse(nums.begin()+pivot+1,nums.end())

    //or 

    int i=pivot+1,j=nums.size()-1; // reversing the numbers after pivot.
    while(i<=j){
        swap(nums[i++],nums[j--]);
    }
}

// reversing a vector : reverse(array.begin(),array.end())
int main(){

    vector<int>nums = {5,4,3,2,1}; // {1,2,3};
    nextPermutation(nums);
    for(int i: nums){
        cout<<i<<" ";
    }
    return 0;
}