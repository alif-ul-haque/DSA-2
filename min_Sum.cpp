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
vector<int>dp(10000,1e9);
int find_s(int s,int n)
{
     if(n==0) return 0;
     int op1,op2;
     if(s*s<=n)
     {
          op1 = find_s(sqrt(n-s*s),n-s*s)+1;
         
     }
     else
     {
         op2 = find_s(s-1,n);
     }
     return min(op1,op2);
}
int find_s_dp(int n)
{
     vector<int>dp(n+1,1e9);
     dp[0] = 0;
     for(int i=1;i<=n;i++)
     {
          for(int j=1;j*j<=i;j++)
          {
                dp[i] = min(dp[i],dp[i-j*j]+1);
          }
     }
     return dp[n];
}
int find_s_rec(int n)
{
    if(n<=0) return n;
    if(dp[n]!=1e9) return dp[n];
    for(int i=1;i*i<=n;i++)
    {
        dp[n] = min(dp[n],find_s_rec(n-i*i)+1);
    }
    return dp[n];
}
signed main()
 {
    granite_state
    int n;
    cin>>n;
    int m = sqrt(n);
    cout<<find_s_dp(n);
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