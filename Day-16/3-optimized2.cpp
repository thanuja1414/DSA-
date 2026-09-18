#include<iostream>
using namespace std;

int peakIndex(vector<int>arr){
    int start = 1 , end = arr.size()-2; // here start cant be 0 and end cant be arr.size()-1
    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid-1]<arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    vector<int>arr = {0,3,8,9,5,2};
    cout<<peakIndex(arr);
    return 0;
}