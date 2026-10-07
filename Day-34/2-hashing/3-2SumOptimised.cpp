#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


// TC-O(n)
vector<int>twoSum(vector<int>&arr,int targetSum){

    unordered_map<int,int>m;
    vector<int>ans;
    for(int i=0;i<arr.size();i++){ // TC-O(n)
        int first =arr[i];
        int second = targetSum-first;

        if(m.find(second)!=m.end()){ // m.find() takes O(1) TC practically 
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first]=i;
    }
    return ans;
}

int main(){

    vector<int>arr={5,2,11,7,15};
    int targetSum=9;
    vector<int>ans=twoSum(arr,targetSum);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}