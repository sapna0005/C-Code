#include <iostream>
using namespace std;
int main(){
    int a=64;
    for (int r = 1; r<=5; r++)
    {
     for (int c= 1; c<=5; c++)
     {
      if (c<=r)
      
        cout<<char(a+r);
      
      else
      
        cout<<" ";
      
      
    }
    cout<<endl;
    }

}