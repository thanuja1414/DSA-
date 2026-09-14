/*
two pointer approach:
-> this approach is used mostly in arrays (especially in sorted arrays).
-> reversing an array , checking palindrome are some problems done using 2pointers.
-> used when two values are to be tracked or compared together at a time.
-> list and vectors also use 2pointers approach.
*/




#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

// two pointer approach - O(n)TC
int findMaxArea(vector<int>heights){
    int area = 0;
    int minHeight;
    int maxArea = 0;
    int leftPointer = 0;
    int width;
    int rightPointer = heights.size()-1;
    while(leftPointer<rightPointer){
        width = rightPointer-leftPointer;
        minHeight = min(heights[leftPointer],heights[rightPointer]);
        area = width*minHeight;
        maxArea = max(maxArea,area);

        heights[leftPointer]>heights[rightPointer]?rightPointer--:leftPointer++;
    }
    return maxArea;
    

}
int main(){
    vector<int>heights = {1,8,6,2,5,4,8,3,7};
    cout<<findMaxArea(heights);
    return 0;
}