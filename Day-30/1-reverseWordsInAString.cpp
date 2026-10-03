#include<iostream>
using namespace std;

//TC-O(n)
void reverseWords(string s){

    reverse(s.begin(),s.end());
    cout<<s<<endl;
    string word ="";
    string ans = "";
    for(int i=0;i<s.length();i++){
        
        //skipping spaces
        if(s[i]==' '){
            continue;
        }

        word="";

        //collecting word
        while(i<s.length() && s[i]!=' '){
            word+=s[i];
            i++;
        }

        //reversing the individual word
        reverse(word.begin(),word.end());


        // add space only when there is a word in ans, so we can avoid adding space at the beginning
        if(!ans.empty()){
            ans+=" ";
        }
        ans+=word;
    }
    cout<<ans<<endl;
}

int main(){
    string s = " hello  world ";
    reverseWords(s);
    return 0;
}