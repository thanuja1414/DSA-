#include<iostream>
#include<vector>
using namespace std;

/*
INITIALIZING A VECTOR : mention size and starting value
vector<int>ans(nums.size(),1);
*/

//O(n)TC , O(1)SC
vector<int>productOfArray(vector<int>nums){
    int n=nums.size();
    vector<int>ans(n,1);

    int suffix = 1;

    //storing prefix values
    for(int i=1;i<n;i++){
        ans[i] = ans[i-1]*nums[i-1];
    }//[1,1,2,6]

    //storing suffix values
    for(int i=n-2;i>=0;i--){
        suffix *=nums[i+1];
        ans[i] = ans[i]*suffix; //nultiplying suffix to the existing prefix values in ans
    }
    return ans; 
}

int main(){

    vector<int>nums = {1,2,3,4};

    vector<int>ans = productOfArray(nums);
    for(int i:ans){
        cout<<i<<" ";

    }

    return 0;
}