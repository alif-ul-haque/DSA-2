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
void merge(vector<int>&arr,int low,int mid,int high)
{
     int left = low;
     int right = mid+1;
     vector<int>tmp;
     while(left<=mid && right<=high)
     {
          if(arr[left]<arr[right])
          {
               tmp.push_back(arr[left]);
               left++;
          }
          else
          {
               tmp.push_back(arr[right]);
               right++;
          }
     }
     while(left<=mid)
     {
        tmp.push_back(arr[left]);
        left++;
     }
     while(right<=high)
     {
        tmp.push_back(arr[right]);
        right++;
     }
     for(int i=low;i<=high;i++)
     {
          arr[i] = tmp[i-low];
     }
}
void merge_sort(vector<int>&arr,int low,int high)
{
     if(low>=high) return;
     int mid = (low+high)/2;
     merge_sort(arr,low,mid);
     merge_sort(arr,mid+1,high);
     merge(arr,low,mid,high);
}
signed main()
 {
    granite_state
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    merge_sort(arr,0,n-1);
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