#include<iostream>
using namespace std;





void changeA_PBValue(int a){
    a=a+10;
}

//using pointers
void changeA_Pointer(int* ptr){
    *ptr = 20;
}


//generally used 
/*
void changeA_PBReference(int &b){ // pass by reference using alias
    b = b+10;
}
*/

int main(){
    int* ptr = NULL;
    cout<<ptr<<endl; //0x0 -> memory address is null or empty , null pointers cant be dereferenced , becoz they dont have a valid address stored

    


    int a = 10;

    changeA_PBValue(a);
    cout<<a<<endl; // a new variable is created and changes are made in the copy , not on the original one , so the output is still 10

    //changeA_PBReference(a); // changes are made in the original "a" variable , so the value changes to 20.
    changeA_Pointer(&a); // same as above function.
    cout<<a<<endl;

    return 0;
}