#include<iostream>
using namespace std;

int binarySearch(vector<int>arr , int target){
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        int mid = start + ((end-start)/2);
        if(target == arr[mid]){
            cout<<"target found at: ";
            return mid;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1; // we searched all the array , but element is not found (not in array)  ,so we return -1.
}
int main(){
    vector<int>arr = {-1,0,3,4,5,9,12};
    int target = 12;
    cout<<binarySearch(arr,target)<<endl;
    
    return 0;
}