#include<iostream>
using namespace std;

void Sorting(vector<int>&nums){
    int countOf0 = 0;
    int countOf1 = 0;
    int countOf2 = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            countOf0++;
        }else if(nums[i]==1){
            countOf1++;
        }else{
            countOf2++;
        }
    }
    for(int i=0;i<countOf0;i++){
        nums[i]=0;
    }
    for(int j=countOf0;j<(countOf1+countOf0);j++){
        nums[j]=1;
    }
    for(int k=(countOf1+countOf0);k<nums.size();k++){
        nums[k]=2;
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