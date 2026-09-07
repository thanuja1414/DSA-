#include<iostream>
using namespace std;


//reverse array -> my approach
void reverseArray(int arr[], int size){
    int i,j;
    for(int i=0 ,j=size-1;i<size/2/*,j>=size/2*/;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void swap(int &a , int &b){ // passing values by reference -> a and b directly refer to the original array elements.
    int temp = a;
    a=b;
    b=temp;
}
void reversedArray(int arr[],int size){
    int start = 0, end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main(){
    int arr[] ={4,2,7,8,1,2,5};
    int size = 7;

    reverseArray(arr,7);
    

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }   

    cout<<endl;

    reversedArray(arr,7);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


//generally vectors are used instead of arrays in online assessments and interview tests.