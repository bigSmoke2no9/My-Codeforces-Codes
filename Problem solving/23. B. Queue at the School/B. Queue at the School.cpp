#include <iostream>
using namespace std;

int main()
{
    int n,t;
    cin >>n >> t;
    char c[n];
    for(int i=0; i<n; i++)
    {
        cin >> c[i];
    }
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(c[j]=='B' && c[j+1]=='G')
            {
                int temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
                j++;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << c[i];
    }
    return 0;
}