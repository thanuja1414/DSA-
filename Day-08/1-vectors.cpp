#include<iostream>
#include<vector>
using namespace std;
int main(){

    // three types of initialization
    vector<int>vec;
    vector<int>vec2 = {1,2,3};
    vector<int>vec3(3,0); // vector of size 3 is created and each element in the vector is 0 -> {0,0,0}
    cout<<vec2[0]<<endl;


    cout<<vec3[0]<<endl;
    cout<<vec3[1]<<endl;
    cout<<vec3[2]<<endl;
    

    for(int i : vec3){ // for each loop 
        cout<<i<<endl;
    }

    vector<char>letters= {'t','a','n','u'};
    for(char letter : letters){
        cout<<letter<<endl;
    }
    return 0;
}