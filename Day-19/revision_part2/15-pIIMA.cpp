#include<iostream>
using namespace std;

int peakIndex(vector<int>arr){
    int start = 0;
    int end = arr.size()-1;

    while(start<end){
        int mid = start + ((end-start)/2);
        if(arr[mid]<arr[mid+1]){
            start = mid +1 ;
        }else{
            end = mid;
        }
    }
    return arr[start];
    
}
int main(){

    vector<int>arr = {2,4,5,9,3,1};
    cout<<peakIndex(arr);
    return 0;
}