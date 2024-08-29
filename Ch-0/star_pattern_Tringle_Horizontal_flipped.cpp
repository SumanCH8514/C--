// Code Topic: Print star pattern Tringle Horizon flipped//,
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter The Range: ";
    int n = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}