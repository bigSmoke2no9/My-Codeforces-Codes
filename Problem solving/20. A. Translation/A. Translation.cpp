#include<iostream>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    
    reverse(t.begin(), t.end());

    if(s==t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}