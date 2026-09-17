#include<iostream>
using namespace std;

int recBS(vector<int>arr , int target , int start , int end){
    if(start<=end){
        int mid = start + ((end-start)/2);
        if(target < arr[mid]){
            return recBS(arr,target,start,mid-1);
        }else if(target > arr[mid]){
            return recBS(arr,target,mid+1,end);
        }else{
            return mid;
        }
    }
    return -1; // if element is not found , or the if condition fails

}

int main(){
    vector<int>arr = {-1,0,3,5,9,12};
    int target = 0;
    int start = 0;
    int end = arr.size()-1;
    cout<<recBS(arr,target,start,end);

    return 0;
}