#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int a;
    cin >> a;
    if(a%2==0)
    {
        cout << a/2 << endl;
    }
    else
    {
        cout << -(a/2)-1 << endl;
    }
}