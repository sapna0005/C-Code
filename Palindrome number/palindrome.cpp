#include <iostream>
using namespace std;
int main(){
    int i; int rev=0; int orig;
   
    cout<<"enter number";
    cin>>i;
     orig=i;
    for (; i>0; i=i/10)
     rev= (rev*10)+(i%10);
     if (rev==orig)
     {
        cout<<"palindrome number";
     }
     else
     {
        cout<<"not palindrome number";
     }
   }