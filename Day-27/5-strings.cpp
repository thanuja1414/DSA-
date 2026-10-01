#include<iostream>
using namespace std;
int main(){
    // string str;
    // //cin>>str; // again cant accept strings after space
    // getline(cin,str);
    // cout<<"output:"<<str<<endl;

    string name = "tanuja gatakala";
    // for(int i=0;i<name.length();i++){
    //     cout<<name[i]<<" ";
    // }

    //or 

    for(char ch:name){
        cout<<ch<<" ";
    }
    return 0;
}