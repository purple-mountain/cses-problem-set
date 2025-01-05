#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    long long arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long total_moves = 0;

    for (int i = 1; i < n; ++i) {
        if (arr[i - 1] > arr[i]) {
            total_moves += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }

    cout << total_moves << "\n";

    return 0;
}
