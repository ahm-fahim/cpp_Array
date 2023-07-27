#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numArr[5] = {1, 4, 5, 6, 3};

    int key = 4;
    int ans = -1;

    for (int i = 0; i < sizeof(numArr) / sizeof(numArr[0]); i++)
    {
        if(numArr[i] == key){
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}