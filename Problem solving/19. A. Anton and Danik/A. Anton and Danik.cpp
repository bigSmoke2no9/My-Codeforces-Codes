#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long n;
    cin>> n;
    char *s=new char[n];
    for(long long i=0;i<n;i++)
    {
        cin>> s[i];
    }
    int anton_count=0;
    int danik_count=0;

    for(long long i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            anton_count++;
        }
        else
        {
            danik_count++;
        }
    }

    if(anton_count>danik_count)
    {
        cout << "Anton" << endl;
    }
    else if(anton_count<danik_count)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    delete[] s;

    return 0;
}