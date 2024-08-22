#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        string s;
        cin >> s;
        int n=s.size();
        int c=1;
        int tar=0;
        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1])
            {
                continue;
            }
            else
            {
                c++;
            }
            if(s[i-1]=='0' && s[i]=='1')
            {
                tar=1;
            }
        }
        int ans= c-tar;
        cout << ans << endl;
    }
    return 0;
}