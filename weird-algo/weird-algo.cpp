#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string ans;
  long n;

  cin >> n;

  while (n != 1) {
    ans += to_string(n) + " ";
    n = n % 2 == 0 ? n / 2 : n * 3 + 1;
  }

  ans += to_string(1) + "\n";

  cout << ans;
}
