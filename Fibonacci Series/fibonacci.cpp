#include <iostream>
using namespace std;

int main() {
    int number,z;
    int x=0;
    int y=1;

    cout << "Enter the number of terms: ";
    cin >> number;
    for (z=0; z<=number;)
    {
        cout<<z<<" ";
        x=y;
        y=z;
        z=x+y;
    }
}
