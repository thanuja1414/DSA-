#include<iostream>
using namespace std;


//O(n)
int main(){
    string name="tanuja";
    int start = 0;
    int end = name.length()-1;
    while(start<end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
    cout<<name<<endl;


    string myStr ="madam";
    string myStrrev = myStr;
    reverse(myStr.begin(),myStr.end());
    cout<<myStr<<endl;
    if(myStrrev == myStr){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"not a palindrome"<<endl;
    }
    return 0;
}