#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char c;
        cin >> c;
        string s="codeforces";
        bool check=false;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==c)
            {
                check=true;
                cout << "YES" << endl;
                break;
            }
        }
        if(!check)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}