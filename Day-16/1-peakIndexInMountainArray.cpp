#include<iostream>
using namespace std;


//TC - O(n)
int peakIndex(vector<int>arr){
    for(int i=1;i<arr.size()-1;i++){
        if(arr[i+1]<arr[i]){
            return i;
        }
    }
    return -1;

}
int main(){
    vector<int>arr = {0,3,8,9,5,2};
    cout<<peakIndex(arr);
    return 0;
}