#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //
    for(int i=1; i<n; i++)
    {
        int key=arr[i];
                int j=i-1;
        while(arr[j]>key && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }

  int min,max;
  for(int i=0,j=n-1;i<p;i++,j--){
    min=arr[i];
    max=arr[j];
  }
  cout<<min<<" "<<max;


}



