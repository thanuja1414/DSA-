#include<iostream>
using namespace std;

int intersectedArray(int arr1[],int arr2[],int arr3[],int size1,int size2){
    int k=0;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                arr3[k]=arr1[i];
                k++;
            }
        }
    }
    return k;

}
int main(){
    int arr1[]={2,3,4,5};
    int arr2[]={1,4,2};
    int size1=4,size2=3;
    int arr3[7];
    int arr3Size = intersectedArray(arr1,arr2,arr3,size1,size2);
    for(int i=0;i<arr3Size;i++){
        cout<<arr3[i]<<" ";
    }
      
    return 0;
}
