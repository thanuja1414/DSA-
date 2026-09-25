#include<iostream>
using namespace std;

 
int isValidMinDistance(vector<int>stalls , int c, int mid){ // O(n)

    //sort the array
    sort(stalls.begin(),stalls.end());

    int cow = 1 , lastStallPos = stalls[0] , minAllowedDistance = mid; // we try to place cows in such a way that min distance remains as the mid value.

    for(int i=1;i<stalls.size();i++){
        if(stalls[i]-lastStallPos>=minAllowedDistance){
            cow ++;
            lastStallPos = stalls[i];
        }
        if(cow == c){
            return true;
        }
    }
    return false;
}


int getDistance(vector<int>&stalls , int n ,int c){

    sort(stalls.begin(),stalls.end()); //O(nlogn)

    int ans = -1;
    int start = stalls[0];
    int end = stalls[n-1]-stalls[0];

    while(start<=end){ // O(log(Range) * n)-> here range is from start to end and n is the tc for isValidMinDistance() loop within while loop.
        int mid = start + ((end-start)/2);

        if(isValidMinDistance(stalls , c, mid)){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid -1;
        }
    }
    return ans;
}


int main(){

    int n = 5; // no.of stalls
    int c = 3; // no of cows
    vector<int>stalls = {1,2,8,4,9};
    cout<<getDistance(stalls,n,c);
    return 0;
}