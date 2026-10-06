#include<iostream>
using namespace std;

// the function searchMatrix() has O(logm) tc , will call the function searchInRow() only at one particular condition , not everytime , so when searchInRow() function is called that takes O(logn) tc , so total tc = O(logm+logn)=O(logm*n)

bool searchInRow(vector<vector<int>>&mat,int midRow,int target){ //TC-O(logn)
    int n=mat[0].size();

    int start=0,end=n-1;
    while(start<=end){
        int mid = start + ((end-start)/2);

        if(mat[midRow][mid]==target){
            return true;
        }else if(target>mat[midRow][mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return false;
    
}


bool searchMatrix(vector<vector<int>>&mat,int target){

    int m=mat.size(),n=mat[0].size();

    int startRow=0;
    int endRow=m-1;
    int endCol=n-1;
    
    while(startRow<=endRow){ // TC-O(logm)
        int midRow = startRow + ((endRow-startRow)/2);

        if(target >=mat[midRow][0] && target<=mat[midRow][n-1]){
            //found the row , so we should apply binary search on this row.
            return searchInRow(mat,midRow,target);
        }
        
        else if(target<=mat[midRow][0]){ // go to upper row
            endRow=midRow-1;
        }
        
        else if(target>=mat[midRow][n-1]){ // go to lower row
            startRow=midRow+1;
        }
    }
    return false;
}
int main(){

    vector<vector<int>>mat = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 34;
    cout<<searchMatrix(mat,target);

    return 0;
}