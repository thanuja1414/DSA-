#include<iostream>
using namespace std;
int main(){

    //square patterns 

    // for(int i = 0 ; i<4;i++){ // no of lines 
    //     for(int j = 1; j<=4;j++){ // what each line should have
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }


    // int n =3;
    // for(int i = 0;i<n;i++){
    //     for(int j =0;j<n;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


  
    // int n=4;
    // for(int i=0;i<n;i++){
    //     char ch = 'A'; //resets in next line
    //     for(int j=0;j<n;j++){
    //         cout<<ch<<" ";
    //         ch++;  //implicit type conversion-> 65+1->66->type conversion->B
    //     }
    //     cout<<endl;
    // }


    // int n =3; 
    // int num = 1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }


    // int n =3;
    // char ch = 'A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }


    //triangle patterns

    // int n = 4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


    // int n=4;
    // int num = 1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<num;
    //     }
    //     num++;
    //     cout<<endl;

    // }

    //or 

    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }


    // int n=5;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch<<" ";
    //     }
    //     ch++;
    //     cout<<endl;
    // }


    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=1;j<=i+1;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j>0;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    //floyd's triangle pattern
    // int n=4;
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int j=1;j<=i+1;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }


    //inverted triangles - was tricky to solve 

    // int n=4;
    // for(int i=0;i<n;i++){
    //     //spaces
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     //nums
    //     for(int j=0;j<n-i;j++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }


    // int n=4;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     //spaces
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     //chars
    //     for(int j=0;j<n-i;j++){
    //         cout<<ch;
    //     }
    //     ch++;
    //     cout<<endl;
    // }


    //pyramid pattern - another tricky one

    // int n=4;
    // for(int i=0;i<n;i++){
    //     //spaces
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i+1;k++){
    //         cout<<k;
    //     }
    //     for(int l=i;l>0;l--){
    //         cout<<l;
    //     }
    //     cout<<endl;
    // }


    //hollow diamond

    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";     
        }
        cout<<"*";
        if(i!=0){
            for(int j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-2){
            for(int j=0;j<2*(n-i)-5;j++){ //2*(n-2-i)-1
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }












    return 0;
}