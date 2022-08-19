#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    for(int i=2; i<=n; i++)
    {
        int sum=arr[i]+arr[i-1];
        if(sum<0)
        {
            arr[i]=-sum;
        }
        else
        {
            arr[i]=sum;
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }

//    int q;
//    cin>>q;
//    for(int i=1; i<=q; i++)
//    {
//        int q1,q2;
//        cin>>q1>>q2;
//        cout<<arr[q2]-arr[q1-1]<<endl;
//
//    }

}



