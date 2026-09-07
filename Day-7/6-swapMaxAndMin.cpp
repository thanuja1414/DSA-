#include<iostream>
using namespace std;
void swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){

    int arr[]={3,4,2,5,1};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIdx = -1;
    int largestIdx = -1;
    for(int i=0;i<size;i++){
        if(arr[i]<=smallest){
            smallest = arr[i]; 
            smallestIdx = i;  
        }
        if(arr[i]>=largest){
            largest = arr[i];
            largestIdx = i;
        }
    }
    swap(arr[smallestIdx],arr[largestIdx]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}