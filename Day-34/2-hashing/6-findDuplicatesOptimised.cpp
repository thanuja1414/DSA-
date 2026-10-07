#include<iostream>
using namespace std;


int repeatedNum(vector<int>&nums){

    int slow=nums[0];
    int fast=nums[0];

    do{
        slow=nums[slow];
        fast=nums[nums[fast]];
    }while(slow!=fast);

    slow=nums[0];

    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }
    return slow; // return fast
}

int main(){

    vector<int>nums = {3,1,3,4,2};
    cout<<repeatedNum(nums)<<endl;
    return 0;
}
