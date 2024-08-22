#include <iostream>	
using namespace std;

int main()
{
    int n, a, b, count=0, minimum=0;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        count=count-a;
        count=count+b;
        if(count>minimum)
        {
            minimum=count;
        }
    }
    cout << minimum << endl;
    return 0;
}