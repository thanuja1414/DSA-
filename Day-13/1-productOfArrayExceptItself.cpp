#include<iostream>
#include<vector>
using namespace std;


//bruteforce approach - O(n^2)TC
vector<int>productOfArray(vector<int>nums){
    vector<int>ans;
    
    for(int i=0;i<nums.size();i++){
        int product = 1;
        for(int j=0;j<nums.size();j++){
            if(i!=j){
                product *=nums[j];   
            }
        }
        ans.push_back(product);
    }
    return ans;
}


int main(){
    vector<int>nums = {1,2,3,4};
    vector<int>ans = productOfArray(nums);

    for(int i : ans){
        cout<<i<<" ";
    }

    //ans = [24,12,8,6]
    return 0;
}