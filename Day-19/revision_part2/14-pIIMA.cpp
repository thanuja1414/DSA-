#include<iostream>
using namespace std;

int peakIndex(vector<int>arr){
    int start = 1;
    int end = arr.size()-2;
    while(start<=end){
        int mid = start + ((end-start)/2);
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return arr[mid];
        }else if(arr[mid-1]<arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;

}
int main(){

    vector<int>arr = {2,4,5,9,3,1};
    cout<<peakIndex(arr);
    return 0;
}