#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>&arr,int n ,int m , int mid){ //O(n)

    int student = 1,pages =0, maxAllowedPages = mid;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>maxAllowedPages){
            return false;
        }
        if(pages+arr[i]<=maxAllowedPages){
            pages+=arr[i];
        }else{
            student ++;
            pages=arr[i];
        }
    }

    return student > m ? false : true;
    // if(student>m){
    //     return false;
    // }else{
    //     return true;
    // }
}

int allocatedBooks(vector<int>&arr,int n ,int m){
    int sum = 0;
    for(int i=0;i<arr.size();i++){ // O(n)
        sum+=arr[i];
    }

    int start = 0 , end = sum; // range of possible answers 
    int ans = -1;

    while(start<=end){ //O(logN * n) -> here n = no of books which is nultiplied when checking isValid() case and N -> is the range of pages from 0 to sumofpages(btw this range we are running the loop).
        int mid = start + ((end-start)/2);
        if(isValid(arr,n,m,mid)){ // left search 
            ans = mid;
            end = mid - 1;
        }else{ // right search
            start = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr = {2,1,3,4};
    int n=4; // no of books 
    int m=2;//no of students who can share the books 
    cout<<allocatedBooks(arr,n,m)<<endl;

    return 0;
}

//dry run on arr = [15,17,20] , n = 3 , m = 2