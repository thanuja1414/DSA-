#include<iostream>
using namespace std;

int uniqueArray(int arr[],int arr2[],int size){
    int j=0;
    for(int i=0;i<size;i++){
        bool duplicate = false;
        for(int k=0;k<j;k++){
            if(arr[i]==arr2[k]){
                duplicate = true;
                break;
            }
        }
        if(!duplicate){
            arr2[j]=arr[i];
            j++;
        }
    }
    return j;
   
}
int main(){
    int arr[]={2,4,4,6,7,2,3};
    int size =7;
    int arr2[7];
    
    int uniqueSize = uniqueArray(arr,arr2,size);

    for(int i=0;i<uniqueSize;i++){
        cout<<arr2[i]<<endl;
    }
    

    return 0;
}