#include<iostream>
using namespace std;
int main(){
    int n =10;
    for(int i = 1;i<=n;i++){ // no of lines
       int m =10;
       for(int j =1; j<=m;j++){ //what each line has
        cout<<"*";
       }
       cout<<endl;
    }
    return 0;
}