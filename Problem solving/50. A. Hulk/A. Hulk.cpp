#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s1="I hate ";
    string s2="I love ";
    string s3="it";
    string s4="that ";
    for(int i=1; i<=n; i++)
    {
        if(i!=n)
        {
            if(i%2!=0)
            {
                cout << s1 << s4;
            }
            else
            {
                cout << s2 << s4;
            }
        }
        else
        {
            if(i%2!=0)
            {
                cout << s1 << s3;
            }
            else
            {
                cout << s2 << s3;
            }
        }   
    }
    return 0;
}