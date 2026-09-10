#include<iostream>
using namespace std;


//BigO(n) ->two pointers approach
int main(){

    vector<int>nums = {2,7,11,15};
    int target = 9;
    int start = 0,end=nums.size()-1;
    while(start<end){
        if(nums[start] + nums[end] == target){
            cout<<nums[start]<<" , "<<nums[end]<<endl;
            break; // multiple times the pair won't be executed
        }
        else if(nums[start] + nums[end]>target){
            end--;
        }else{
            start++;
        }
    }
    return 0;
}