#include<iostream>
using namespace std;
int main(){
    vector<int>arr = {-1,0,3,4,5,9,12};
    int target = 12;
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(target == arr[mid]){
            cout<<"target found at:"<<mid<<endl;
            break;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return 0;
}