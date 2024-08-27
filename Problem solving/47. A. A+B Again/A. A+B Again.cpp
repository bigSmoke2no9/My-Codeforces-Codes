#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin >> x;

        int a= x/10;
        int b= x%10;

        cout << a+b << endl;   
    }
    return 0;
}