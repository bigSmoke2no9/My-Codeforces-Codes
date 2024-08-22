#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        char third = 'a' + (n - 1) % 26;
        n = (n - 1) / 26;

        char second = 'a' + (n - 1) % 26;
        n = (n - 1) / 26;

        char first = 'a' + (n - 1) % 26;

        cout << first << second << third << endl;
    }

    return 0;
}
