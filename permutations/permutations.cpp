#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    if (n == 1) {
        cout << n << endl;

        return 0;
    }

    if (n <= 3) {
        cout << "NO SOLUTION" << endl;

        return 0;
    }

    cout << n - 1;

    for (int i = n - 3; i > 0; i -= 2) {
        cout << " " << i;
    }

    for (int i = n; i > 0; i -= 2) {
        cout << " " << i;
    }

    cout << endl;

    return 0;
}
