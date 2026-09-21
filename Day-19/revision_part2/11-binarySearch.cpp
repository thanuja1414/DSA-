#include<iostream>
using namespace std;

int bs(vector<int>arr,int target){
    int start = 0;
    int end= arr.size()-1;
    while(start<=end){
        int mid = start + ((end-start)/2);
        if(arr[mid]==target){
            return mid;
        }else if(target < arr[mid]){
            end=mid-1;
        }else{
            start = mid + 1;
        }
    }
    return -1;

}
int main(){
    vector<int>arr = {2,5,6,23,78,89};
    int target = 23;
    cout<<bs(arr,target);
    return 0;
}