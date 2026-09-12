//solved leetcode problem 121 with an  optimized solution
#include<iostream>
using namespace std;


//TC = BigO(n^2) -> checks all possible solutions , bruteforce
int buyAndSellStock(vector<int>prices){

    // int max_profits = INT_MIN;
    int max_profits = 0;

    for(int i=0;i<prices.size()-1;i++){
        for(int j=i+1;j<prices.size();j++){
            int diff = 0;
            if(prices[i]<prices[j]){
                diff = prices[j]-prices[i];
            }
            max_profits = max(max_profits , diff);
        }
    }
    return max_profits;
}




// TC = BigO(n) -> but doesnt check all possible solutions.
// int buyAndSellStock(vector<int>prices){

//     int max_profits = INT_MIN;

//     for(int i=0,j=i+1;i<prices.size()-1 /* && j<prices.size() */;i++,j++){ // this loop always checks the current element with only next element. it only checks adjacent elements 7->1 , 1->5 , 5->3 , 6->4 , with the comparisions max profit is 4 , but actually max profit is 5 .
//         int diff = 0;
//         if(prices[i]<prices[j]){
//             diff = prices[j]-prices[i];
//         }
//         max_profits = max(max_profits,diff);
//     }
//     return max_profits;
// }


int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout<<"profits are : "<<buyAndSellStock(prices)<<endl;
    return 0;
}