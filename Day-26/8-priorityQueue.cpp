//priority queue internally uses a maxheap(largest element at top) or minheap(smallest element at top) , maxheap and minheap are complete binary tree. Visualize it as a stack.

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    priority_queue<int>pq; // generally largest element has highest priority -> has a default comparator.
    priority_queue<int,vector<int>,greater<int>>pq2; //when smallest element should have greater priority , then we use a functor(function object) or a comparator(functions that tells us logic on how to do comparision) called greater<int>
    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);

    pq2.push(5);
    pq2.push(3);
    pq2.push(10);
    pq2.push(4);

    while(!pq2.empty()){
        cout<<pq2.top()<<endl;
        pq2.pop();
    }
    return 0;
}