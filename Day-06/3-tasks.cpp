#include<iostream>
using namespace std;


int decimalToBinary(int n){
    int temp = n;
    int binaryNum = 0;
    int pow = 1; //10^0
    while(temp!=0){
        int rem = temp%2;
        binaryNum += rem*pow;
        temp = temp/2;
        pow*=10;
    }
    return binaryNum;
}

//check if a number is power of 2 - my approach
int powerOf2(int n){

    int bn = decimalToBinary(n);
    int countOfOne = 0;
    std::string bnStr = std::to_string(bn);
    for(int i = 0 ; i<bnStr.length();i++){
        if(bnStr[i] == '1'){
            countOfOne ++;
        }
    }
    if(countOfOne == 1){
        return true;
    }else{
        return false;
    }
}

//easier one 
int powerOfTwo(int n){
    return n>0 && (n&(n-1))==0;
}

//even num or odd num check - my approach
void oddEvenCheck(int n){
    int bn = decimalToBinary(n);
    std::string bnStr = std::to_string(bn);
    if(bnStr[bnStr.length()-1] == '0'){ // i'm making the same mistake of not using ' '  while writing 0 and 1.
        cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;
    } 
}

//easier
void oddEvenCheck2(int n){
    if(n & 1){ // n&1 == 1 ? odd number
        cout << "odd" << endl;
    }else{  // n&1 == 0 ? even number
        cout << "even" << endl;
    }
}

int main(){
    cout<<(powerOf2(32)?"Power of 2":"not a power of 2")<<endl;
    cout<<boolalpha<<powerOf2(24)<<endl;
    cout<<powerOfTwo(64)<<endl; // cout if the return type of func is int
    oddEvenCheck(45); // no cout if the return type of func is void
    oddEvenCheck2(454);
    return 0; 
}