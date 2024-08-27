#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;
        int temp=s1[0];
        s1[0]=s2[0];
        s2[0]=temp;

        cout << s1 << " " << s2 << endl;
    }
    
    return 0;
}