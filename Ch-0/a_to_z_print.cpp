// Code Topic: //,
#include <iostream>
using namespace std;
int main()
{

    char alf = 'A';
    int i = 0;

    while (i < 26)
    {
        cout << "ASCII Value of " << alf << " = " << int(alf) << endl;
        alf++;
        i++;
    }

    cout << endl;
    alf = 'a';

    for (i = 0; i < 26; i++)
    {
        cout << "The ASCII Value of " << alf << " = " << int(alf) << endl;
        alf++;
    }

    return 0;
}