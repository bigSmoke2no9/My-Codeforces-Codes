#include <iostream>
using namespace std;

int main()
{
    int n, k,i, x[500], count=0;
    cin >> n >> k;

    for(i=0; i<n; i++)
    {
        cin>>x[i];
        }
        for (i=0; i<n; i++){
            if(x[i]>=x[k-1] && x[i]>0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}