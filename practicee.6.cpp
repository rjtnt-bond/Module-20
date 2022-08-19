#include<bits/stdc++.h>
using namespace std;

int binaray_search(int arr[],int val,int lw,int hw){

         if(lw<=hw){
             int mid=(lw+hw)/2;
            if(val==arr[mid]) return mid;
            else if(val<arr[mid]){
                 binaray_search(arr,val,lw,mid-1);
            }
            else{
                  binaray_search(arr,val,lw+1,hw);
            }
         }
         else{
                 return -1;
         }

}
int main()
{
      int n, val;
    cin>>n>>val;
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    //bionary search
    int lw=0,hw=n-1;
    int pos=binaray_search(arr,val,lw,hw);
    if(pos==-1){
    cout<<"Value not found "<<endl;
    }
    else{
        cout<<"Position "<<pos<<endl;
    }


}



