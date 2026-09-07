#include<iostream>
using namespace std;

int arrSum(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int arrPro(int arr[], int size){
    int pro=1;
    for(int i=0;i<size;i++){
        pro*=arr[i];
    }
    return pro;
}
int main(){
    int arr[] ={1,2,3,4};
    int size =4;
    cout<<arrSum(arr,4)<<endl;
    cout<<arrPro(arr,4)<<endl;
    return 0;
}