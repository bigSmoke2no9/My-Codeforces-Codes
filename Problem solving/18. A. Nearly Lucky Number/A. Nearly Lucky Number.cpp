#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int lucky_count = 0;
    
    while(n > 0) {
        int d = n % 10;
        n = n / 10;
        if(d == 4 || d == 7) {
            lucky_count++;
        }
    }

    if(lucky_count==4 || lucky_count==7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}