#include<iostream>
using namespace std;

// in worst case we traverse from r=0 to r=m-1 and c=n-1 to c=0 , the TC-O(m+n)

bool searchMatrix(vector<vector<int>>&mat,int target){

    //taking mid value ourselves -> make sure to choose corner values 
    //lowest value ->mat[0][0]
    //higest value -> mat[m-1][n-1]
    //corner values -> mat[0][n-1] or mat[m-1][0]

    int m=mat.size();
    int n=mat[0].size();

    int r=0;
    int c=n-1;

    while(r<m && c>=0){
        if(mat[r][c]==target){
            return true;
        }else if(target < mat[r][c]){
            c--;
        }else{ // target>mat[r][c]
            r++;
        }
    }
    return false;
}
int main(){

    vector<vector<int>>mat ={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target=5;

    cout<<searchMatrix(mat,target);
    return 0;
}