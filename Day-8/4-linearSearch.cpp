#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &nums , int target){ // passing the vector by reference so it avoid making a copy of it.
    for(int num : nums){
        if(num == target){
            cout<<"target found"<<endl;
            return num;
        }
    }
    cout<<"target not found"<<endl;
    return -1;
}

int main(){

    vector<int>nums ={1,4,5,2,7};
    int target = 2;

    cout<<linearSearch(nums,target)<<endl;
    return 0;
}