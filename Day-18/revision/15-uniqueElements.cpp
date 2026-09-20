#include<iostream>
using namespace std;

int uniqueArray(int arr[],int newArr[],int size){
    int j=0;
    
    for(int i=0;i<size;i++){
        bool duplicates = false;
        for(int k=0;k<j;k++){
            if(newArr[k]==arr[i]){
                duplicates = true;
                break;
            }
        }  
        if(!duplicates){
            newArr[j] = arr[i];
            j++;
        }  
    }
    return j;

}
int main(){
    int arr[] ={2,4,5,6,7,2,3};
    int size = 7;
    int newArr[7];
    int arrSize = uniqueArray(arr,newArr,size);
    for(int i=0;i<arrSize;i++){
        cout<<newArr[i]<<" ";
    }

    return 0;
}