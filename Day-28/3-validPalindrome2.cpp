#include<iostream>
using namespace std;

bool isPalindrome(string s,int st,int end){
    while(st<end){
        if(s[st]!=s[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}


bool checkPossiblePalindrome(string s){
    int st =0;
    int end = s.length()-1;
    while(st<end){
        if(s[st]!=s[end]){
          return isPalindrome(s,st+1,end) || isPalindrome(s,st,end-1);
        }
        st++;
        end--;
    }
    return true;

}

int main(){

    string s = "abca";
    cout<<checkPossiblePalindrome(s);
    return 0;
}