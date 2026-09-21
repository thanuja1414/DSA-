#include<iostream>
using namespace std;
int bSS(vector<int>&prices){
    int maxProfits = 0;
    for(int i=0;i<prices.size()-1;i++){
        int diff = 0;
        for(int j=i+1;j<prices.size();j++){
            if(prices[i]<prices[j]){
                diff=prices[j]-prices[i];
            }
            maxProfits = max(maxProfits, diff);
        }
    }
    return maxProfits;

}
int main(){
    vector<int>prices = {7,1,5,3,6,4};
    cout<<bSS(prices);
    return 0;
}