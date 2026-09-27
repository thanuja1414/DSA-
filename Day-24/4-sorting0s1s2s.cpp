#include<iostream>
using namespace std;


int main(){  // O(nlogn)
    vector<int>nums = {2,0,2,1,1,0,1,2,0,0};
    sort(nums.begin(),nums.end());
    for(int i:nums){
        cout<<i<<" ";
    }
    return 0;
}