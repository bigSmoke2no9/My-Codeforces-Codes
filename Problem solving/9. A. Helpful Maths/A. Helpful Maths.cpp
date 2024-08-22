#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    int i, j;

    cin >> n;

    for(i=0; i< n.size(); i+=2)
    {
        for(j=0; j<n.size()-1; j+=2)
        {
            if(n[j]>n[j+2])
            {
                swap(n[j],n[j+2]);
            }
        }
    }
    cout << n << endl;
}