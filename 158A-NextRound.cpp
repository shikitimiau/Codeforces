#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // Read the initial data
    // `n` is the number of participants, and `k` is the position of the participant whose result we will use for comparison.
    int n, k;
    cin >> n >> k;

    // According to the number of participants specified, store their results.
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Count how many participants have results greater than or equal to the k-th participant's result.
    int cont = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] <= 0)
            continue; // Skip non-positive results

        if(arr[i] >= arr[k-1]){
            cont++;
        } else {
            break; // Stop counting as soon as we encounter a result less than the k-th participant's result
        }
    }
    
    cout << cont << endl;
    return 0;
}