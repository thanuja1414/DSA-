#include<iostream>
using namespace std;


//TC-O(n)
int compressString(vector<char>chars){

    int idx = 0; // tracks the  new chars array indices while changes are made in it. [a,2,b,2,c,3]

    for(int i=0;i<chars.size();i++){
        char ch = chars[i];
        int count =0; // tracks the count of each charac.
        while(i<chars.size() && chars[i]==ch){
            count++;
            i++;
        }
        if(count == 1){
            chars[idx]=ch;
            idx++;
        }else{
            chars[idx]=ch;
            idx++;
            string str = to_string(count);
            for(char dig:str){
                chars[idx]=dig;
                idx++;
            }
        }
        i--; // index i is already one index ahead so we do i-- so the i++ in for loop doesnt skip a char.
    }
    chars.resize(idx);
    return idx; // stores the length of chars array after changing values in it.
    
}

int main(){
    vector<char>chars = {'a','a','b','b','c','c','c'};
    cout<<compressString(chars)<<endl;
    return 0;
}