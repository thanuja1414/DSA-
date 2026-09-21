#include<iostream>
using namespace std;

int peakIndex(vector<int>arr){
    for(int i=1;i<arr.size()-2;i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            return arr[i];
        }
    }
    return -1;

}
int main(){

    vector<int>arr = {2,4,5,9,3,1};
    cout<<peakIndex(arr);
    return 0;
}