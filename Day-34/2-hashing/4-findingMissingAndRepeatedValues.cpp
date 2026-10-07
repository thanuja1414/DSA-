#include<iostream>
#include<unordered_set>
using namespace std;

//TC-O(n^2)
vector<int>FMRV(vector<vector<int>>&grid){
    unordered_set<int>s;
    vector<int>ans;
    int n=grid.size();
    int a,b;
    int expectedSum=0;
    int actualSum=0;
   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            actualSum+=grid[i][j];
            if(s.find(grid[i][j])!=s.end()){
                a=grid[i][j]; // stores repeated value
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    expectedSum = (n*n)*(n*n + 1)/2;
    b=expectedSum+a-actualSum; // stores missing value
    ans.push_back(b);
    return ans;

}

int main(){

    vector<vector<int>>grid ={{9,1,7},{8,9,2},{3,4,6}};
    vector<int>ans=FMRV(grid);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}