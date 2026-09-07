#include<iostream>
using namespace std;

int changeArray(int arr[] , int size){
    cout<<"array in function"<<endl;
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
}

//arrays are passed as pointers to the functions , so the whole array cant be returned when the function type is "int" , instead place "int *" , this will return the address of the first element of the array i.e returning pointer to the array's first element. Pointers store the address of the first element of the array.

// the name of the array is implicitly a pointer  -> stores the starting address(address of the first element of the array) of the array. ex: arr = 100 (stores the first ele add) , so when a function is called , the arr=100 is passed to that function (pass by reference) , so any changes made to the array in the function are actually made in the original array. 

int main(){
    int arr[]={1,2,3};
    int size =3;

    cout<<changeArray(arr,3)<<endl;

    cout<<"array in main func"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   
    return 0;
}