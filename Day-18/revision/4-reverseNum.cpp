#include<iostream>
using namespace std;
int main(){
    int num = 12321;
    int temp = num;
    int reversed = 0;

    while(temp!=0){
        int rem = temp%10;
        reversed = reversed * 10 + rem;
        temp/=10;
    }
    cout<<reversed<<endl;

    if(reversed == num){
        cout<<"palindrome";
    }else{
        cout<<"not a palindrome";
    }
    
    return 0;
}