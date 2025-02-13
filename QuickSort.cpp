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
int partition(vector<int>&arr,int low,int high)
{
    int i = low-1;
    int pivot = arr[high]; 
    for(int j=low;j<=high-1;j++)
    {
         if(arr[j]<=pivot)
         {
             i++;
             swap(arr[i],arr[j]);
         }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void qs(vector<int>&arr,int low,int high)
{
    if(low<=high)
    {
         int k = partition(arr,0,high);
         qs(arr,low,k-1);
         qs(arr,k+1,high);
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