#include<iostream>
using namespace std;


// here we are taking 2 passes -> one for loop for updating count and remaining for overwriting the numbers according to count.
void Sorting(vector<int>&nums){ // O(n)
    int cOf0 = 0,cOf1=0,cOf2=0;
    int idx=0;

    for(int i=0;i<nums.size();i++){
        if(nums[i]==0)cOf0++;
        else if(nums[i]==1)cOf1++;
        else cOf2++;
    }

    for(int i=0;i<cOf0;i++){
        nums[idx++]=0;
    }
    for(int j=0;j<cOf1;j++){
        nums[idx++]=1;
    }
    for(int k=0;k<cOf2;k++){
        nums[idx++]=2;
    }
}

int main(){
    vector<int>nums = {2,0,2,1,1,0,1,2,0,0};
    Sorting(nums);
    for(int i:nums){
        cout<<i<<" ";
    }
    return 0;
}