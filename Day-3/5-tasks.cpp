#include<iostream>
using namespace std;
int main(){

    //sum of numbers divisible by 3
    int n=10;
    int sum=0;
    for(int i = 1; i<=n;i++){
        if(i%3 ==0){
            sum=sum+i;
            cout<<i<<"\n";
        }
    }
    cout<<sum<<endl;


    //factorial 
    int fact = 1;
    int target = 5;
    for(int i= 1;i<=target;i++){
        fact*=i;
    }
    cout<<fact<<endl;
   


    //sum of digits
    int num = 123;
    int temp = num;
    int digitSum = 0;
    while(temp !=0){
        int rem = temp%10;
        digitSum+=rem;
        temp =temp/10;
    }
    cout<<digitSum<<endl;


    //reverse the digits and check palindrome
    int num2 = 1331;
    int temp2= num2;
    int reversed = 0;
     while(temp2 !=0){
        int rem = temp2%10;
        reversed = reversed*10 + rem;
        temp2 =temp2/10;
    }
    cout<<reversed<<endl;
    if(num2 == reversed){
        cout<<"palindrome";
    }else{
        cout<<"not a palindrome";
    }

    //fibonacci- 0,1,1,2,3,5,8,.....


    return 0;
}  