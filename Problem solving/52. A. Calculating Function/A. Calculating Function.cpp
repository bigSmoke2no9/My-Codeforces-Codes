#include<iostream>
#include<cmath>
using namespace std;

double f(int n)
{
    double sum=0;
    for(double i=1; i<=n; i++)
    {
        sum=sum+(pow(-1,i)*(i));
    }
    return sum;
}

int main()
{
    double n;
    cin >> n;
    double ans=f(n);
    cout << ans << endl;
    return 0;
}