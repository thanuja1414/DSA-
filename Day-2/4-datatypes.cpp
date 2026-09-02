/* 
datatypes:
int 
char 
bool
double
float
*/

#include <iostream>
using namespace std;
int main(){
    int age = 25;
    char grade = 'A';
    float PI = 3.14f;

    cout<<sizeof(age)<<endl;
    cout<<age<<endl;

    cout<<sizeof(grade)<<endl;
    cout<<grade<<endl;

    cout<<PI<<endl;

    bool isSafe = true;
    cout<<isSafe<<endl;

    double number = 89.2;
    cout<<number<<endl;

    return 0;
}