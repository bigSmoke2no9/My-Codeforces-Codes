#include <iostream>
using namespace std;

void modifyString(int n, int k, string s) {
    int countB = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'B') {
            countB++;
        }
    }

    if (countB == k) {
        cout << "0\n";
        return;
    }

    cout << abs(k - countB) << "\n";

    if (countB < k) {
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'A') {
                cout << i + 1 << " B\n";
                countB++;
                if (countB == k) {
                    break;
                }
            }
        }
    } else {
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == 'B') {
                cout << i + 1 << " A\n";
                countB--;
                if (countB == k) {
                    break;
                }
            }
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        modifyString(n, k, s);
    }

    return 0;
}
