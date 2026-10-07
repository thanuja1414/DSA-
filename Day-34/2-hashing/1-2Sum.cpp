// bruteforce -> better -> optimised

#include<iostream>
#include<vector>
using namespace std;

//TC-O(n^2)
pair <int,int>twoSum(vector<int>&arr,int targetSum){

    pair<int,int>p={-1,-1};
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==targetSum){
                p.first=i;
                p.second=j;  
                return p; 
            }
        }
    }
    return p;
}

int main(){

    vector<int>arr ={5,2,11,7,15};
    int targetSum = 9;
    pair<int,int>ans = twoSum(arr,targetSum);
    cout<<ans.first<<","<<ans.second<<endl;

    return 0;
}