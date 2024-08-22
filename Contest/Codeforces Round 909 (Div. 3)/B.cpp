#include <iostream>
using namespace std;

int main()
{
    int t;
    int sum=0;
    cin >> t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        for(i=0;i<n;i++)
        {
            if(n<150000)
            {
                sum=sum+i;
            }
            else
            {
                sum=0;
            }
        }
    }
    cout << sum << endl;
    return 0;
}