#include<iostream>
using namespace std;
int main(){

    int a = 10;
    int* p =&a;
    cout<<p<<endl; // 0x16b20ab28
    // cout<<p++<<endl; 
    p++;
    cout<<p<<endl; // 0x16b20ab2c

    p--;
    cout<<p<<endl; // 0x16b20ab28
    
    p=p+2;
    cout<<p<<endl; // 0x16b20ab30


    int arr[] = {1,2,3,4};
    cout<<arr<<endl; // 0x16b25ab10
    cout<<*(arr)<<endl; // 1
    cout<<*(arr+1)<<endl; // 2
    return 0;
}