#include<iostream>
using namespace std;
int main(){
    char c  = 'a';
    if(c>='a' && c <='z'){
        cout<< "lowercase";
    }else{
        cout<<"uppercase";
    }

    //another way

    if(c >= 65 && c<=90){
        cout<<"uppercase";
    }else{
        cout<<"lowercase";
    }
    
    return 0;
}