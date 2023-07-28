#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9] = {3, 4, 3, 4, 6, 6, 7, 7, 8,};

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if(arr[i]==arr[j]){
                arr[i] = arr[j] = -1;
            }
        }
    }

    for (int i = 0; i < 9; i++){
        if(arr[i]>0){
            cout << arr[i] << endl;
        }
    }
}