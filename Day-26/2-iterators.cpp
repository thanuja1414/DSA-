#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int>nums = {1,2,3,4};


    //frwd
    vector<int>::iterator it;
    for(it = nums.begin();it!=nums.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    //bcwrd
    vector<int>::reverse_iterator it2;
    for(it2 = nums.rbegin();it2!=nums.rend();it2++){
        cout<<*(it2)<<" ";
    }
    cout<<endl;
  
    // modern c++ can understand that we are creating iterators by just a simple word called {auto}

    for(auto it3=nums.begin();it3!=nums.end();it3++){
         cout<<*(it3)<<" ";
    }
    cout<<endl;

    for(auto it4=nums.rbegin();it4!=nums.rend();it4++){
         cout<<*(it4)<<" ";
    }
    return 0;
}