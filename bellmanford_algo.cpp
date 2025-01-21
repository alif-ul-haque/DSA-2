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
void bellmanford(int n,int s,vector<pair<pair<int,int>,int>>&edg)
{
    vector<bool>vis(n+1);
    vector<bool>par(n+1,-1);
    vector<int>dis(n+1,INT_MAX);
    dis[s] = 0;
    par[s] = s;
    for(int i=0;i<n-1;i++)
    {
        for(auto x:edg)
        {
            int a = x.first.first;
            int b = x.first.second;
            int wt = x.second;
            if(dis[b]>dis[a]+wt)
            {
                dis[b] = dis[a]+wt;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" is away from 1 ---> "<<dis[i]<<endl;
    }
}
signed main()
 {
    granite_state
    int n,e;
    cin>>n>>e;
    vector<pair<pair<int,int>,int>>edg(e);
    for(int i=0;i<e;i++)
    {
         int a,b,c;
         cin>>a>>b>>c;
         edg[i] = {{a,b},c};
    }
    bellmanford(n,1,edg);
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