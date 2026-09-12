#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>vec;
    cout<<vec.size()<<endl;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
 
    cout<<vec.size()<<endl; //3 -> after adding 4, 5 -> size becomes 5
    cout<<vec.capacity()<<endl; //4 -> after adding 4, 5 -> capacity becomes 8
    return 0;
}
