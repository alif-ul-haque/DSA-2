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
vector<vector<int>>dp(1000,vector<int>(1000,-1));
int lcs2(int n,int m,string &s1,string &s2)
{
     if(n==0 || m==0) return 0;
     if(dp[n][m]!=-1) return dp[n][m];
     if(s1[n-1]==s2[m-1]) return dp[n][m] = 1+lcs2(n-1,m-1,s1,s2);
     else return dp[n][m] = max(lcs2(n,m-1,s1,s2),lcs2(n-1,m,s1,s2));
}
int lcs1(int n,int m,string &s1,string &s2)
{
     if(n==0 || m==0) return 0;
     if(s1[n-1]==s2[m-1]) return 1+lcs1(n-1,m-1,s1,s2);
     else return max(lcs1(n,m-1,s1,s2),lcs1(n-1,m,s1,s2));
}
int lcs3(int n,int m,string &s1,string &s2)
{
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                 dp[i][j] = 1+dp[i-1][j-1];
            }
            else
            {
                 dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}
signed main()
 {
    granite_state
    int n,m;
    string s1,s2;
    cin>>s1>>s2;
    n = s1.size();
    m = s2.size();
    vector<vector<int>>dp(n,vector<int>(m,0));
    int ans1 = lcs3(n,m,s1,s2);
    cout<<ans1<<endl;
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