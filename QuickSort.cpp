#include <bits/stdc++.h>
using namespace std;
#define granite_state ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define line cout << "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define vsb (v).begin(),(v).end()
#define vse (v).rbegin(),(v).rend()
#define spc " "
#define pb push_back
#define pf push_front;
int partition(vector<int>&v,int lo,int hig)
{
     int pivot = lo;
     int i = lo;
     for(int j=lo+1;j<=hig;j++)
     {
          if(v[j]<=v[pivot])
          {
              i++;
              swap(v[i],v[j]);
          }
     }
     swap(v[i],v[lo]);
     return i;
}
int partition1(vector<int>&v,int lo,int hig)
{
     int pivot = hig;
     int i = lo-1;
     for(int j=lo;j<hig;j++)
     {
          if(v[j]<=v[pivot])
          {
              i++;
              swap(v[i],v[j]);
          }
     }
     i++;
     swap(v[i],v[hig]);
     return i;
}
void qs(vector<int>&arr,int lo,int hig)
{
     if(lo<=hig)
     {
          int k = partition1(arr,lo,hig);
          qs(arr,lo,k-1);
          qs(arr,k+1,hig);
     }
}
signed main()
 {
    granite_state
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    qs(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    line;
    // int mn = 1e18;
    // vector<int>arr(1e6);
    // int j;
    // for(int i=0;i<1e6;i++)
    // {
    //      int val = rand();
    //      arr[i] = val;
    //      if(val<mn)
    //      j = i;
    // }
    // swap(arr[0],arr[j]);
    // qs(arr,0,1e6-1);
}

    ////////////////////////////////////////////////////
    //                                                 //
    //                 A                               //
    //                                                 //
    //                 L                               //
    //                                                 //
    //                 I                               //
    //                                                 //
    //                 F                               //
    /////////////////////////////////////////////////////
//think simply, it's always easier than it seems at first
    //PEN AND PAPER instead of ms paint
    //keep at it even if it feels exhausting(we're not doing this for fun anymore)
    //2 GHONTAR AGER EDITORIAL DHORBI NA