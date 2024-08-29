#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the number[eg. two or three digits]:";
    cin >> n;
    int mult = 1;
    while (n > 0)
    {
        int r = n % 10;
        mult = mult * r;
        n = n / 10;
    }
    cout << "Multi:" << mult;
}