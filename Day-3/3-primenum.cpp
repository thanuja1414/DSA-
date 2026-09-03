#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cout<<"enter a number :";
    cin>>n;

    //method-1
    for(int i = 2;i<n;i++){
        if(n%i ==  0){
            count ++;
        }
    }
    if(count == 0){
        cout<<"prime"<<endl;
    }else{
        cout<<"not prime"<<endl;
    }

    //method-2 
    bool isPrime = true;
    for(int j=2;j<n;j++){
        if(n%j ==0){ //non-prime
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<"prime"<<endl;
    }else{
        cout<<"non-prime"<<endl;
    }
    

    //method-3 , much better 
    bool isPrime = true;
    for(int k = 2;k*k<=n;k++){
        if(n%k == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
       cout<<"prime"<<endl;
    }else{
       cout<<"non-prime"<<endl;
    }
       


    return 0;
}