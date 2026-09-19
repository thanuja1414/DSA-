#include<iostream>
using namespace std;
//hints to note when to use BS:
//1. sorted array
//2. logn TC


int peakIndex(vector<int>arr){
    int start = 0;
    int end = arr.size()-1;
    while(start<end){
        int mid = start + ((end-start)/2);
        if(arr[mid]<arr[mid+1]){
            //increasing slope
            start = mid + 1 ;
        }
        else{
            //decreasing slope 
            end = mid; // mid can be the peak value.
        }
    }
    return start;
}
int main(){
    vector<int>arr = {0,3,8,9,5,2};
    cout<<peakIndex(arr);
    return 0;
}