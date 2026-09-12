#include<iostream>
using namespace std;
int main(){

    //print numbers
    int i =1 ;
    while(i<=5){
        cout<<i<<" ";
        i++;
    }
    cout<<" "<<endl;
    for(int j = 1 ; j<=5;j++){
        cout<<j<<" ";
    }
    cout<<" "<<endl;

    //sum of nums 
    int target = 10;
    int sum = 0;
    for(int k = 1;k<=10;k++){
        sum +=k;
        if(k==5){
            break;
        }
    }
    cout<<sum<<endl;

    //sum of odd nums 
    int targetVal = 10;
    int oddSum =0;
    for (int k = 1 ; k<=10 ; k++){
        if (k%2 !=0){
           oddSum+=k;
        }
    }
    cout<<oddSum<<endl;

    //do-while
    int myNum =10;
    do{
        cout<<myNum<<" ";
        myNum++;
    }while(myNum<=20);

    return 0;
}