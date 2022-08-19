#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>arr[i][j];
        }
    }
int sum=0;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            for(int j=1; j<=n; j++)
            {
                if(j%2!=0)
                {
                    sum+=arr[i][j];
                }

            }
        }


    }

    cout<<sum<<endl;
}



