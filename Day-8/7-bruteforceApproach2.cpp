#include<iostream>
#include<vector>
#include<climits>
using namespace std;


//better approach-BigO(n2)
int main(){

    vector<int>arr = {2,3,4,5};
    int maxSum = 0; // 2,
    for(int start=0;start<arr.size();start++){
        int result = 0;
        for(int end=start;end<arr.size();end++){
            result +=arr[end];
            maxSum = max(maxSum , result);
        }   
    }
    cout<<maxSum<<endl;

    return 0;

}

