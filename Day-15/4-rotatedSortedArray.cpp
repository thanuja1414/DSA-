// in rotated sorted array either left half is sorted or right half is sorted.

#include<iostream>
using namespace std;

int rotatedSortedArray(vector<int>arr , int target){
    int start = 0 , end = arr.size()-1;
    while(start<=end){
        int mid = start + ((end-start)/2);
        if(target == arr[mid]){
            return mid;
        }
        if(arr[start]<arr[mid]){ // left side is sorted
            if(arr[start]<=target && target <=arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        else{ // if arr[start] > arr[mid] -> right side is sorted
            if(arr[mid]<=target && target <=arr[end]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int>arr = {3,4,5,6,7,0,1,2};
    int target = 0;
    cout<<rotatedSortedArray(arr,target)<<endl;
    return 0;
}