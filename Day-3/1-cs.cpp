#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks: ";
    cin>>marks;
    if(marks>=90){
        cout<<"A\n";
    }else if(marks>=70 && marks<90){
        cout<<"B\n";
    }else if(marks>=50 && marks<70){
        cout<<"C\n";
    }else{
        cout<<"D\n";
    }


    char letter;
    cout<<"enter character: ";
    cin>>letter;
    if(letter >='a'&& letter <='z'){
        cout<<"lower case";
    }else{
        cout<<"uppercase";
    }

    if(letter >=65 && letter <=90){ //implicit type conversion takes place , the letter is compared with its corresponding ascii value.
        cout<<"uppercase";
    }else{
        cout<<"lowercase";
    }

    //ternary statement
    int age = 14;
    cout<<(age>=18?"eligible to vote":"not eligible to vote");
    return 0;
}