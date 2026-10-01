#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "tanuja gatakala"; //dynamic
    cout<<str<<endl;

    string str1 = "tan";
    string str2 = "uja";
    string str3=str1+str2; // concatenation -> not possible in charArrays
    cout<<str3<<endl;
    cout<<(str1==str2)<<endl; // 0
    cout<<(str1<str2)<<endl; // 1-> strings with "t" come first compared to strings with "u"
    cout<<str.length()<<endl;
    
    return 0;
}