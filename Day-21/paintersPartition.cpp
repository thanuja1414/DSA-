// binary search is being applied on possible answers not on the given problem array.

#include<iostream>
using namespace std;

bool isValidTime(vector<int>boardsToPaint,int m , int mid){ // O(n)
    int painter = 1 , time = 0 , maxAllowedTime = mid;
    for(int i=0;i<boardsToPaint.size();i++){

        if(time + boardsToPaint[i]<=maxAllowedTime){
        time +=boardsToPaint[i];
        }else{
            painter ++;
            time = boardsToPaint[i];
        }

    }

    return painter>m?false:true;
    // if(painter>m){
    //     return false;
    // }else{
    //     return true;
    // }
    
}


int minTimeToPaintBoards(vector<int>boardsToPaint , int n, int m){
    int minBoards=0;
    int maxBoards=0;
    int maxValue = INT_MIN;

    for(int i=0;i<boardsToPaint.size();i++){ //0(n)
        maxBoards+=boardsToPaint[i];
        if(boardsToPaint[i]>maxValue){
            maxValue = boardsToPaint[i];
        }
    }
    minBoards = maxValue;

    int start = minBoards; //40 -> minimum no.of boards to be painted.
    int end = maxBoards; //100 -> maximum no.of boards to be painted.
    int ans = -1;

    while(start<=end){ // O(log(sum) * n) n->this is the tc of the isValidTime()func) also for log(sum)- the loop is going from start to sum number so instead of n times , sum times the loop is running.
        int mid = start + ((end-start)/2);

        if(isValidTime(boardsToPaint,m,mid)){ // can painters finish painting boards within this time ? checking valid time !
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return ans;

}
int main(){
    vector<int>boardsToPaint = {40,30,10,20};
    int n = 4; // four boards each of size 40 units , 30 units , 10 units and 20 units respectively.
    int m = 2; // no of painters assigned to paint the boards.
    cout<<minTimeToPaintBoards(boardsToPaint,n,m)<<endl;
    return 0;
}