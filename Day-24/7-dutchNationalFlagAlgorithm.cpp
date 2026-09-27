//sorting in O(n)-TC in single pass - i.e in single loop , and SC is constant.
// take 3 pointers (not as in real pointers , but variables) low,mid,high.
#include<iostream>
using namespace std;

void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low =0,mid=0,high=n-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }
        
}

int main(){
    vector<int>nums = {2,0,2,1,1,0,1,2,0,0};
    sortColors(nums);
    for(int i: nums){
        cout<<i<<" ";
    }
    return 0;
}