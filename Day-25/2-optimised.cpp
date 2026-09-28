#include<iostream>
using namespace std;

// TC-O(n+m) , SC-O(1)->no extra space is used.
void mergeArrays(vector<int>&nums,vector<int>&nums2,int m ,int n){
    int i = m-1 ; // largest element index in nums array
    int j = n-1; // last element index in nums2 array
    int k = m+n-1; // last element index in nums array

    while(j>=0 && i>=0){ // we come out of this loop if either i<0 or j<0 -> if j<0 that means all the elements are copied to nums array, but what if i<0 and still the elements are not copied to nums array? for that we write another while loop 
        if(nums[i]>=nums2[j]){
            nums[k]=nums[i];
            i--;
        }else{
            nums[k]=nums2[j];
            j--;
        }
        k--;
    }

    //when still elements of nums2 are not copied to nums becoz i has become <0.
    while(j>=0){
        nums[k--]=nums2[j--];
        // k--;
        // j--;
    }

}
int main(){
    vector<int>nums = {1,2,3,0,0,0};
    vector<int>nums2 = {2,5,6};
    int m=3;
    int n=3;
    mergeArrays(nums,nums2,n,m);
    for(int i: nums){
        cout<<i<<" ";
    }
   
    return 0;
}