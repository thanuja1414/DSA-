#include<iostream>
using namespace std;

int cWMW(vector<int>&heights){
    int area;
    int maxArea=0;
    int leftptr = 0;
    int rightptr = heights.size()-1;
    while(leftptr<rightptr){
        int width = rightptr-leftptr;
        int minHeight = min(heights[leftptr] ,heights[rightptr]);
        area = width*minHeight;
        maxArea = max(area,maxArea);

        if(heights[leftptr]<heights[rightptr]){
            leftptr++;
        }else{
            rightptr--;
        }
    }
    return maxArea;
}
int main(){
    vector<int>heights = {1,8,6,2,5,4,8,3,7};
    cout<<cWMW(heights);
    return 0;
}