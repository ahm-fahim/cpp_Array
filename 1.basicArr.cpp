#include <bits/stdc++.h>
using namespace std;

int main()
{
    char vowels[5];

    // foreach
    for (char &element : vowels)
    {
        cin >> element;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << vowels[i];
    }
    cout << endl;
    
    int numArr[5] = {1, 4, 5, 6, 3};

    int sum = 0;

    for (int i = 0; i < sizeof(numArr)/ sizeof(numArr[0]); i++)
    {
        sum += numArr[i];
    }
    cout << sum << endl;

    return 0;
}