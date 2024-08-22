#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) {
        char col,row;
        cin >>col >>row;

        for(char c='a';c<='h';++c) 
        {
            if (c!=col) 
            {
                cout<<c<<row<<endl;
            }
        }
        for(char r='1';r<='8';++r) 
        {
            if (r!=row) 
            {
                cout<<col<<r<<endl;
            }
        }
    }
    return 0;
}