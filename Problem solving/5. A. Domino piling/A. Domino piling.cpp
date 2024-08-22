#include<iostream>
using namespace std;

int main()
{
    int M, N, out;
    cin>> M >> N;
    out= (M*N)/2;

    if(M>=1 && N<=16){
        cout <<out<< endl;
    }
    return 0;
}