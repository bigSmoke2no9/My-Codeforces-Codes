#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s="abc";
        string str;
        cin>>str;
        int count=0;
        for(int i=0;i<3;i++)
        {
            if(s[i]!=str[i])
            {
                count++;
            }
        }
        if(count==0 || count ==2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
    return 0;
}