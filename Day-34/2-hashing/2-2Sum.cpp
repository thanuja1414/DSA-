#include<iostream>
#include<vector>
using namespace std;

// two pointer approach -> TC-O(nlogn)
pair<int,int>twoSum(vector<int>&arr,int targetSum){

    pair<int,int>p={-1,-1};

    int st=0;
    int end=arr.size()-1;

    while(st<end){ // O(n)
        if(arr[st]+arr[end]==targetSum){
            p.first=st;
            p.second=end;
            return p;
        }else if(arr[st]+arr[end]>targetSum){
            end--;
        }else{
            st++;
        }
    }
    return p;

}

int main(){

    vector<int>arr ={5,2,11,7,15};
    int targetSum=9;

    sort(arr.begin(),arr.end()); // O(nlogn) -> {2,5,7,11,15}
    
    pair<int,int>ans=twoSum(arr,targetSum);

    cout<<ans.first<<","<<ans.second<<endl;
    return 0;
}