#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b && c!=b)
        {
            cout << c << endl;
        }
        else if(b==c && a!=c)
        {
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
        }
    }
    return 0;
}