#include<iostream>
using namespace std;

int maxRowSum(int mat[3][3]){
    int maxRowSum = INT_MIN;
    
    for(int i=0;i<3;i++){
        int sumOfRow=0;
        for(int j=0;j<3;j++){
            sumOfRow+=mat[i][j];
        }
        maxRowSum = max(maxRowSum,sumOfRow);
    }
    return maxRowSum;
}

int maxColSum(int mat[3][3]){

    int maxColSum = INT_MIN;
    for(int j=0;j<3;j++){
        int sumOfCol=0;
        for(int i=0;i<3;i++){
            sumOfCol+=mat[i][j];
        }
        maxColSum = max(maxColSum,sumOfCol);
    }
    return maxColSum;
}

int diagonalSum(int mat[3][3]){

    int rows = 3;
    int cols = 3;

    if(rows!=cols){
        return -1;
    }

    int diagSum =0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                diagSum+=mat[i][j];
            }
        }
    }
    return diagSum;
}

int reverseDiagSum(int mat[3][3]){
    int reverseDiagSum=0;
    int rows = 3;
    int cols = 3;

    if(rows!=cols){
        return -1;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i+j==(3-1)){ // for n rows and n cols , search for n-1 sum
                reverseDiagSum+=mat[i][j];
            }
        }
    }
    return reverseDiagSum;
}

int totalDiagonalSum(int mat[3][3]){ //O(n^2)

    int rows=3;
    int cols=3;
    int totalDiagonalSum=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j || i+j==(3-1)){
                totalDiagonalSum+=mat[i][j];
            }
        }
    }
    return totalDiagonalSum;
}


int totalDiagSum(int mat[3][3]){ //O(n)
    int diagSum=0;
    for(int i=0;i<3;i++){
        diagSum+=mat[i][i];
        diagSum+=mat[i][3-i-1];
    }

    return diagSum-mat[(int)3/2][(int)3/2]; // odd numbered matrix has common middle diagonal element that is added twice , to remove that , divide the row or col count with 2 .
}

int main(){
    int mat[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"maximum row sum: "<<maxRowSum(mat)<<endl;
    cout<<"maximum column sum: "<<maxColSum(mat)<<endl;
    cout<<"diagonal sum: "<<diagonalSum(mat)<<endl;
    cout<<"reverse diagonal sum: "<<reverseDiagSum(mat)<<endl;
    cout<<"total diagonal sum: "<<totalDiagonalSum(mat)<<endl;
    cout<<"total diagonal sum(O(n)): "<<totalDiagSum(mat)<<endl;
    return 0;
}