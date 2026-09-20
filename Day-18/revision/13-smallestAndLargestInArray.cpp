#include<iostream>
using namespace std;
int main(){

    int arr[] = {3,5,6,-1,7};
    int size = 5;
    int smallestNum = INT_MAX;
    int largestNum = INT_MIN;
    int smallestIdx = -1;
    int largestIdx = -1;
    for(int i=0;i<size;i++){
        if(arr[i] < smallestNum){
            smallestNum = arr[i];
            smallestIdx = i;
        }
        if(arr[i]>largestNum){
            largestNum = arr[i];
            largestIdx = i;
        }
    }
    cout<<smallestNum<<endl;
    cout<<smallestIdx<<endl;
    cout<<largestNum<<endl;
    cout<<largestIdx<<endl;
    return 0;
}