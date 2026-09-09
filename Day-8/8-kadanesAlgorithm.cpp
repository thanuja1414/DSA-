#include<iostream>
#include<vector>
#include<climits>
using namespace std;


// BigO(n)
int main(){
    vector<int>arr = {-1,-2,-3,-4,-5}; // edge cases or corner cases
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i:arr){
        currSum+=i;
        maxSum = max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<maxSum<<endl;

    return 0;
}