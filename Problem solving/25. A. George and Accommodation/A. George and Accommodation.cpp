#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int possibility = 0;

    while (n--) 
    {
        int x, y;
        cin >> x >> y;

        if (y-x>=2) 
        {
            possibility++;
        } 
        
    }

    cout << possibility << endl;
    return 0;
}