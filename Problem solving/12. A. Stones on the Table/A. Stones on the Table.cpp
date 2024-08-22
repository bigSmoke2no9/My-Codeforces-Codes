#include <iostream>
using namespace std;
int remove(char *s, int n)
{
    int count=0;
    for(int i=0; i <n; i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int i,n;
    cin >> n;
    char *s= new char[n];

    for(i=0;i<n;i++)
    {
        cin>> s[i];
    }

    int r= remove(s, n);
    cout << r << endl;
    delete[] s;
    return 0;
}