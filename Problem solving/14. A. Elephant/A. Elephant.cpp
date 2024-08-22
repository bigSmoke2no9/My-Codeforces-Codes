#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int step;
    step= x/5 + (x%5!=0);
    cout << step << endl;
    return 0;
}