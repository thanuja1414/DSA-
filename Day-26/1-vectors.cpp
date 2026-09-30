#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>nums = {1,2,3,4};

    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.emplace_back(8);
    nums.pop_back();


    cout<<"size:"<<nums.size()<<endl;
    cout<<"capacity:"<<nums.capacity()<<endl;

    for(int i : nums){
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"value at index 4"<<endl;
    cout<<nums.at(4)<<endl;
    cout<<nums[4]<<endl;


    cout<<"front:"<<nums.front()<<endl;
    cout<<"back:"<<nums.back()<<endl;


    vector<int>nums2(3,10); // dynamic programming - tabulation DP[][]
    for(int i:nums2){
        cout<<i<<" ";
    }
    cout<<endl;


    vector<int>vec1 = {1,2,3};
    vector<int>vec2(vec1); // copying elements of vec1
    for(int i:vec2){
        cout<<i<<" ";
    }
    cout<<endl;


    vector<int>nums3 = {1,2,3,4,5,6,7,8,9};
    nums3.erase(nums3.begin()+1,nums3.begin()+3); // delete range of elements 
    nums3.erase(nums3.begin());
    nums3.erase(nums3.begin()+2);

    nums3.insert(nums3.begin()+2,100); 


    for(int i:nums3){
        cout<<i<<" ";
    }
    cout<<endl;

    nums3.clear();
    cout<<"capacity after clearing nums3: "<<nums3.capacity()<<endl;
    cout<<"size after clearing nums3: "<<nums3.size()<<endl;

    cout<<"empty vector or not ?(1=empty | 0=non-empty) : "<<nums3.empty()<<endl;


    vector<int>tan = {1,2,3};
    cout<<"beginning of tan vector:"<<*(tan.begin())<<endl; // dereference
    cout<<"ending of tan vector:"<<*(tan.end()-1)<<endl; 
    cout<<"vector.end() shows garbage value:"<<*(tan.end())<<endl; 


    



    return 0;
}