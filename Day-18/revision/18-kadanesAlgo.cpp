//max subarray sum
#include<iostream>
#include<vector> // for vector
#include<climits> // for INT_MIN
#include<algorithm> // for max()
using namespace std;

int maxSubArraySum(vector<int>&arr){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i : arr){
        currSum+=i;
        maxSum = max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
    
}
int main(){
    vector<int>arr = {2,4,-10,7,3};
    cout<<maxSubArraySum(arr);
    return 0;
}