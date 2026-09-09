#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>letters = {'t','a','n','u'};

    //size -> tells the no.of elements in the vector
    cout<<"size = "<<letters.size()<<endl;
    for(char i : letters){
        cout<<i<<endl;
    }

    //push_back -> adds elements at the last
    vector<int>nums;
    cout<<"size = "<<nums.size()<<endl;
    nums.push_back(6);
    nums.push_back(5);
    nums.push_back(4);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(1);
    for(int i : nums){
        cout<<i<<endl;
    }

    //pop_back -> delete elements at the last
    nums.pop_back();
    nums.pop_back();
    for(int i : nums){
        cout<<i<<endl;
    }
    cout<<"size = "<<nums.size()<<endl;

    //front -> first element is displayed
    cout<<nums.front()<<endl;

    //back -> last element is displayed
    cout<<nums.back()<<endl;

    //at -> displayes element at ith index
    cout<<nums.at(0)<<endl; //displays element at index 0 ->4


    return 0;
}