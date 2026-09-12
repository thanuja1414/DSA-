#include<iostream>
using namespace std;
int main(){
    int marks[5]; // array declared
    int marksOfStudents[5] = {23,34,56,67,78}; // array initialized
    int n = sizeof(marksOfStudents)/sizeof(int); // gives 5*4/4 = 20/4 = 5 -> number of elements in array


    cout<<sizeof(marksOfStudents)<<endl; // shows how many bytes of memory is occupied = 20bytes


    for(int i=0 ;i<5;i++){
        cin>>marks[i];   
    }
    

    for(int i=0 ;i<5;i++){
        cout<<marks[i]<<" ";   
    }


    for(int i =0; i<n;i++){
       cout<<marksOfStudents[i]<<" ";
    }
    

    //smallest and largest value in array
    int ele[5] = {3,95,-15,43,3};
    int smallest = INT_MAX; // +infinity
    int largest = INT_MIN;  //-infinity
    int smallestIndex = -1;
    int largestIndex = -1;

    for(int i=0;i<5;i++){
        if(ele[i] <= smallest){
            smallest = ele[i];
            smallestIndex = i;
        }
        // smallest = min(ele[i],smallest);
        if(ele[i]>=largest){
            largest = ele[i];
            largestIndex = i;
        }
        // largest = max(ele[i],largest);
    }
    cout<<smallest<<endl;
    cout<<smallestIndex<<endl;
    cout<<largest<<endl;
    cout<<largestIndex<<endl;

    return 0;
}