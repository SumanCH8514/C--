// Code Topic: revarse number//,
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number to Revarse:" << endl;
    cin >> n;
    int r = 0;
    cout << "Number in Revarse:";
    while (n > 0)
    // { // Logic 1 starts
    //     int t = n % 10;
    //     r = r * 10 + t;
    //     n /= 10;
    // }
    // cout << r; // Logic 1 ends

    { // Logic 2 starts
        int t = n % 10;
        cout << t;
        n /= 10;
    } // Logic 2 ends

    return 0;
}