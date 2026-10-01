#include<iostream>
using namespace std;

int main(){
    char str[] = "tanuja gatakala";
    int len =0;
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<endl;
        len++; // spaces are also counted
    }
    cout<<"length: "<<len<<endl; // 15
    
    return 0;
}