#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string str;

    cin >> str;

    int i = 0, j = 0, ans = 0;

    while (j < str.length()) {
        if (str[i] != str[j]) {
            ans = max(ans, j - i);
            i = j;
        }

        ++j;
    }

    ans = max(ans, j - i);
    cout << ans << "\n";
}
