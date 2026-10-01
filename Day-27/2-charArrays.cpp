#include<iostream>
using namespace std;

int main(){
    char str[100];
    cout<<"enter a string: ";
   // cin>>str; // can only accept string without spaces , if there are spaces , strings after them are ignored.

    // so we use cin.getline
    //cin.getline(str,100,'$'); // once you write $ , input is locked , no other extra string is accepted.
    cin.getline(str,100);

    cout<<"output: "<<str<<endl;

    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<endl;
    }
    return 0;
}