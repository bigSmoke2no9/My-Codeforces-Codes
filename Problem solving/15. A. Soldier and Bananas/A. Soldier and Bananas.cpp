#include <iostream>
using namespace std;

int main()
{
    int k,n,w;
    cin >> k >> n >> w;
    int total=0;
    for(int i=1; i<=w; i++)
    {
        total=total+k*i;
    }
    int need;
    need=total-n;
    if(total<=n)
    {
        cout << "0" << endl;
    }
    else
    {
    cout << need << endl;
    }
    return 0;
}