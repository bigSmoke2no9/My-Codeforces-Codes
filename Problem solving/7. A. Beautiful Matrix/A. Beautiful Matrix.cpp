#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, j, e=0, swap;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>> e;
            if(e==1)
            {
                swap=abs(i-3)+abs(j-3);
                
            }
        }
    }
    cout << swap << endl;
    return 0;
}