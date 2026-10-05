#include<iostream>
using namespace std;

pair<int,int> linearSearch(int mat[3][3] , int target){
    pair<int,int>p ={-1,-1};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(mat[i][j]==target){
                p.first=i;
                p.second=j;
                return p;
            }
        }
    }
    return p;
}

int main(){

    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int target =10;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(mat[i][j]==target){
                cout<<"element found at "<<i<<" row and "<<j<<" column"<<endl;
            }
        }
    }

    pair<int,int>result = linearSearch(mat,target);
    cout<<"("<<result.first<<","<<result.second<<")"<<endl;
   
    return 0;
}