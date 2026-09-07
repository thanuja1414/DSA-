#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i] == target){
            // cout<<"target element found at "<<arr[i]<<endl;
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    int target = 50;
    cout<<linearSearch(arr,7,50)<<endl;
    return 0;
}


//time complexity = BigO(n) 