#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a<b && b<c)
        {
            cout << b << endl;
        }
        else if(c<b && b<a)
        {
            cout << b << endl;
        }
        else if(b<a && a<c)
        {
            cout << a << endl;
        }
        else if(c<a && a<b)
        {
            cout << a << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    return 0;
}