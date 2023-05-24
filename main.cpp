#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;
    cout << a + b << "\n";

    int myInt;
    char myChar;
    float myFLoat;
    double myDouble;

    cout << "Size of int " << sizeof(myInt) << endl;
    cout << "Size of char " << sizeof(myChar) << endl;
    cout << "Size of float " << sizeof(myFLoat) << endl;
    cout << "Size of double " << sizeof(myDouble) << endl;

    short int shortInt;
    long int longtInt;

    cout << "Size of long int " << sizeof(longtInt) << endl;
    cout << "Size of short int " << sizeof(shortInt) << endl;

    return 0;
}