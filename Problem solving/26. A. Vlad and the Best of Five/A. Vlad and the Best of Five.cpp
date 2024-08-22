#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A_count = 0;
        int B_count = 0;
        char s[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> s[i];
            if (s[i] == 'A')
            {
                A_count++;
            }
            else
            {
                B_count++;
            }
        }
        if(A_count>B_count)
        {
            cout << 'A' << endl;
        }
        else
        {
            cout << 'B' << endl;
        }
    }
    return 0;
}