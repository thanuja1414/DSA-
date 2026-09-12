//better approach with O(n) TC 
#include<iostream>
using namespace std;

int buyAndSellStock(vector<int>prices){
    int max_profits = 0;
    int best_buy = prices[0];
    for(int i=1;i<prices.size();i++){
        if(prices[i]>best_buy){
            max_profits = max(max_profits , prices[i]-best_buy);
        }
        best_buy = min(best_buy,prices[i]);
    }
    return max_profits;
}

int main(){
    
    vector<int>prices = {7,1,5,3,6,4};
    cout<<"profits are : "<<buyAndSellStock(prices)<<endl;
    return 0;
}
