#include<iostream>
#include<vector>
using namespace std;

//TC-O(m*n)
void spiralPattern(vector<vector<int>>mat){
    int m=mat.size();
    int n=mat[0].size();
    int sRow =0;
    int eRow =m-1;
    int sCol=0;
    int eCol=n-1;

    while(sRow<=eRow && sCol<=eCol){
        //printing top row
        for(int j=sCol;j<=eCol;j++){
            cout<<mat[sRow][j]<<" ";
        }

        //printing right col
        for(int i=sRow+1;i<=eRow;i++){
            cout<<mat[i][eCol]<<" ";
        }

        //printing bottom row
        for(int j=eCol-1;j>=sCol;j--){
            if(sRow==eRow){
                break;
            }
            cout<<mat[eRow][j]<<" ";
        }

        //printing left col
        for(int i=eRow-1;i>sRow;i--){
            if(sCol==eCol){
                break;
            }
            cout<<mat[i][sCol]<<" ";
        }
        sRow++;
        eRow--;
        sCol++;
        eCol--;
    }
        
}

int main(){

    vector<vector<int>>mat = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiralPattern(mat);

    return 0;
}