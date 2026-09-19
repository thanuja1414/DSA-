#include<iostream>
using namespace std;

//cases to note : 

/*
there might be a case where the single element i.e the mid value can be at index  0 or at index n-1 , in that sitch ,  we cant apply the first if condition where we check with mid-1 and mid+1 , those dont exist for index 0 and n-1 , so separately write them.
*/

int singleElement(vector<int>arr){
    int start = 0 , end = arr.size()-1;

    // if only single element is in array
    if(arr.size()==1){
            return arr[0];
    }
    //if more than one element is in array
    while(start<=end){
        int mid = start + ((end-start)/2);

       
        
        // mid or single element at index 0
        if(mid == start && arr[mid+1]!=arr[mid]){
            return arr[mid];
        }

        //mid or single element at index n-1
        if(mid == end && arr[mid-1]!=arr[mid]){
            return arr[mid];
        }

        //if exactly mid is the single element
        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }

        //if mid is even indexed then left and right arrays have even no.of elements
        else if(mid%2==0){
                // if(arr[mid-1]==arr[mid]){ // left search
                //     end = mid - 1;
                // }else{ // right search
                //     end = mid + 1;
                // }  

                if(mid%2==0){
                if(arr[mid]==arr[mid+1]){
                    start = mid + 2;
                }else{
                    end = mid - 1;
                }
            }
        }

        //if mid is odd indexed then left and right arrays have odd no.of elements
        else{
            if(arr[mid-1] == arr[mid]){ // right search
                start = mid + 1;
            }else{ // left search
                end = mid - 1;
            }
        }
    }
    return -1;  
}
int main(){
    vector<int>nums = {1,1,2,2,3}; // {1,1,2,3,3,4,4,8,8}
    cout<<singleElement(nums)<<endl;
    return 0;
}