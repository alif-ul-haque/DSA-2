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

void dijsktra(int n,vector<vector<pair<int,int>>>&adj)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,1});
    vector<int>dis(n+1,INT_MAX);
    dis[1] = 0;
    vector<int>par(n+1,-1);
    par[1] = 1;
    vector<bool>vis(n+1,false);
    while(!pq.empty())
    {
        auto tp = pq.top();
        int b = tp.second;
        int wt = tp.first;
        pq.pop();
        if(vis[b]) continue;
        vis[b] = true;
        for(auto x:adj[b])
        {
            int a = x.first;
            int c = x.second;
            if(dis[a]>wt+c)
            {
                dis[a] = wt+c;
                par[a] = b;
                pq.push({wt+c,a});
            }
        }
    }
    for(int i=1;i<n+1;i++)
    {
        cout<<i<<" is away from 1 ---> "<<dis[i]<<endl;
    }
    vector<int>path;
    int e = 2;
    while(par[e]!=e)
    {
        path.push_back(e);
        e = par[e];
    }
    path.push_back(e);
    reverse(path.begin(),path.end());
    for(auto x:path)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
signed main()
 {
    granite_state
    int n,e;
    cin>>n>>e;
    vector<vector<pair<int,int>>>adj(n+1);
    for(int i=0;i<e;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
    }
    dijsktra(n,adj);
}



/*
 1 2 50
 1 4 10
 2 4 15
 1 3 45
 2 3 10
 4 5 15
 6 5 3
 5 3 35
 3 5 30

*/
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