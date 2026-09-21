#include<iostream>
using namespace std;

void pairSum(vector<int>&arr, int target){
    int start = 0 , end = arr.size()-1;
    while(start<end){
        if(arr[start]+arr[end]==target){
            cout<<arr[start]<<" , "<<arr[end]<<endl;
            break;
        }else if(arr[start]+arr[end]>target){
            end--;
        }else{
            start++;
        }
    }
}
int main(){
    vector<int>arr = {2,7,11,15};
    int target = 9;
    pairSum(arr,target);
    return 0;
}