#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// my approach - BigO(n3)
int main(){
    vector<int>arr ={ 2,3,9,-3};
    int maxSum = INT_MIN; // if incase there are negative  values -> {-2,-5,-8}
    int result = 0;  

    //printing all the sub arrays
    for(int start=0;start<arr.size();start++){
        for(int end=start;end<arr.size();end++){
            result = 0;
            for(int i=start;i<=end;i++){
                cout<<arr[i];
                result +=arr[i]; 
            }
            maxSum = max(maxSum , result);
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<maxSum<<endl;

    return 0;
}



