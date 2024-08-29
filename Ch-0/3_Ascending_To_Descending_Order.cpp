// Code Topic: //,
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "..........Ascending to Descending order......\n";
    cout << "Enter Number Of Digits: ";
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Digit %d :", i + 1);
        scanf("%d", &ar[i]);
    }
    printf("your List Is : ");
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (ar[i] < ar[j])
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    printf("\nyour List in Ascending to Descending Order : ");
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}