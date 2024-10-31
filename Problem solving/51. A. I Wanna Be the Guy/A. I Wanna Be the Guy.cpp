#include<iostream>
using namespace std;

void swapp(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void bubbleSorting(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(a[i]>a[j])
            {
                swapp(a[i],a[j]);
            }
        }
    }
}

int main()
{
    int count=0;
    int n;
    cin >> n;
    int o;
    cin >> o;
    int *a=new int[500];
    for(int i=0; i<o; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int s=m+o;
    for(int i=o; i<s; i++)
    {
        cin >> a[i];
    }
    bubbleSorting(a,s);
    for(int i=0; i<s; i++)
    {
        if(a[i]!=a[i+1])
        {
            count++;
        }
    }
    if(count==n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}