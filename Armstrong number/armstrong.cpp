#include <iostream>
using namespace std;
int main(){
    int i; int sum=0; int orig;
    cout<<"Enter number";
    cin>>i;
    orig=i;
    for (; i>0;)
    {
     sum=sum+(i%10)*(i%10)*(i%10);
       i=i/10;
    }
    if (sum==orig)
    {
        cout<<"armstrong";
    }
    else
    {
        cout<<"not armstrong";
    }
    }