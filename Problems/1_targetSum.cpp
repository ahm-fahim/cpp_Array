#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {3, 4, 6, 7, 1};

    int targetSum = 7;

    int pairs = 0;

    for (int i = 0; i < 5; i++){
        for (int j = i + 1; j < 5; j++){
            if(arr[i]+ arr[j]== targetSum){
                pairs++;
            }
        }
    }
    cout << pairs << endl;
}