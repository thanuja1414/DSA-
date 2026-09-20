#include<iostream>
using namespace std;
int main(){
    vector<int>arr = {2,3,-1,5};
    int maxSum = INT_MIN;

    for(int start=0;start<arr.size();start++){
        for(int end=start;end<arr.size();end++){
            int result = 0;
            for(int i=start;i<=end;i++){
                cout<<arr[i];
                result+=arr[i];
            }
            maxSum = max(result , maxSum);
            cout<<" ";

        }
        cout<<endl;
    }
    cout<<maxSum;

    return 0;
    
}

//other approach 

int main(){
    vector<int>arr = {2,3,-1,5};
    int maxSum = INT_MIN;

    for(int start=0;start<arr.size();start++){
        int result = 0;
        for(int end=start;end<arr.size();end++){
            result +=arr[end];
            maxSum = max(result,maxSum);
        }
    }
    cout<<maxSum;

    return  0;
}