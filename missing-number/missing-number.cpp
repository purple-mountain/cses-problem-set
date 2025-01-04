#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  long totalSum = (long)n * (n + 1) / 2;
  long givenSum = 0;

  for (int i = 0; i < n - 1; ++i) {
    int input;
    cin >> input;
    givenSum += input;
  }

  int ans = totalSum - givenSum;

  cout << ans << "\n";
}
