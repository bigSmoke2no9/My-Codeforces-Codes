#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int i;
    string s;
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cin >> s;
        int l = s.length();
        if (l > 10)
        {
            cout << s[0] << l - 2 << s[l - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}