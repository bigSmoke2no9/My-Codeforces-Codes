#include<iostream>
using namespace std;

void swapp(char &a, char &b)
{
    char temp=a;
    a=b;
    b=temp;
}

void deleteDuplicate(char *s, int &n) 
{
    int k = 0;
    bool check[256] = {false};

    for (int i=0; i<n; i++) 
    {
        if (!check[s[i]]) 
        {
            s[k++] = s[i];
            check[s[i]] = true;
        }
    }
    n = k;
}

int partition(char s[], int low, int high)
{
    int pivot=s[high];
    int i=low-1;
    for(int j=low; j<high; j++)
    {
        if(s[j]<pivot)
        {
            i++;
            swapp(s[i],s[j]);
        }
    }
    swap(s[i+1],s[high]);
    return i+1;
}

void quickSort(char s[], int low, int high)
{
    if(low<high)
    {
        int pi=partition(s,low,high);
        quickSort(s,low,pi-1);
        quickSort(s,pi+1,high);
    }
}

int main()
{
    int n;
    cin >> n;
    char s[n];
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }
    for(int i=0; i<n; i++)
    {
        s[i]=tolower(s[i]);
    }
    quickSort(s,0,n-1);
    deleteDuplicate(s,n);
    if(n==26 && s[0]=='a' && s[25]=='z')
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}