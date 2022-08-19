#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        int cnt=0;
        for(int j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                cnt++;
                break;
            }
        }
        if(cnt==0 && n!=1)
        {
            cout<<i<<" ";
        }
    }
}



