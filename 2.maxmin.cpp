#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numArr[5] = {1, 4, 5, 6, 3};

    int mx = 0;    

    for (int i = 0; i < sizeof(numArr) / sizeof(numArr[0]); i++)
    {
        if(mx < numArr[i]){
            mx = numArr[i];
        }
    }
    cout << mx << endl;

    return 0;
}