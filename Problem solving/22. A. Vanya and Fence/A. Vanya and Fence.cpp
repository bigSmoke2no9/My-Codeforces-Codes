#include <iostream>
using namespace std;

int main()
{
    int n,h;
    cin >>n >> h;
    int a[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]<=h)
        {
            a[i]=1;
        }
        else
        {
            a[i]=2;
        }
        sum=sum+a[i];
    }
    cout << sum << endl;
    return 0;
}