#include<iostream>
using namespace std;

int majEle(vector<int>nums){
    int freq=0,ans=0;
    for(int i=0;i<nums.size();i++){
        if(freq==0){
            ans=nums[i];
        }
        if(nums[i]==ans){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int>nums = {1,2,2,1,1};
    cout<<majEle(nums)<<endl;
    return 0;
}