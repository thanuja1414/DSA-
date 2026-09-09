#include<iostream>
#include<vector>
using namespace std;

void swap( int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

void reverseArray(vector<int>&nums){
    int start = 0 , end = nums.size()-1; // instead of passing size like in arrays , we can use size function in vectors to avoid passing size
    while(start<end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
}
int main(){
    vector<int>nums = {2,3,4,5};
    reverseArray(nums);

    for(int i : nums){
        cout<<i<<endl;
    }
    return 0;
}