#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int upper_c=0, lower_c=0;
    long long int i;
    for(i=0; i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            upper_c++;
        }
        else 
        {
            lower_c++;
        }
    }

    for(i=0; i<s.size();i++)
    {
        if(upper_c>lower_c)
        {
            s[i]=toupper(s[i]);
        }
    else
        {
            s[i]=tolower(s[i]);
        }
    }
    cout << s << endl;

    return 0;
}