#include<iostream>
using namespace std;

//brute force approach - O(n^2)TC
int findMaxArea(vector<int>heights){
    int area;
    int minHeight;
    int maxArea = 0;
    for(int i=0;i<heights.size();i++){
        for(int j=i+1;j<heights.size();j++){
            minHeight=min(heights[i],heights[j]);
            area=minHeight*(j-i);
        }
        maxArea = max(area, maxArea);
    }
    return maxArea;
}
int main(){
    vector<int>heights =  {1,8,6,2,5,4,8,3,7}; 
    cout<<findMaxArea(heights);
    return 0;
}