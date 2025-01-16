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

signed main()
 {
    granite_state
    int n,e;
    cin>>n>>e;
    vector<vector<pair<int,int>>>adj(n);
    for(int i=0;i<e;i++)
    {
         int a,b,c;
         cin>>a>>b>>c;
         adj[a].push_back({b,c});
         adj[b].push_back({a,c});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>par(n,-1);
    vector<int>key(n,INT_MAX);
    vector<bool>mst(n,false);
    par[0] = 0;
    pq.push({0,0});
    while(!pq.empty())
    {
        auto tp = pq.top();
        int wt = tp.first;
        int u = tp.second;
        pq.pop();
        if(mst[u]) continue;
        mst[u] = true;
        for(auto x:adj[u])
        {
             int b = x.first;
             int a = x.second;
             if(!mst[b] && key[b]>a)
             {
                 par[b] = u;
                 key[b] = a;
                 pq.push({a,b});
             }
        }
    }
    int s = 0;
    for(int i=1;i<key.size();i++)
    {
        s+=key[i];
    }
    cout<<"The total cost of MST : "<<s;
    line;
    for(int i=1;i<n;i++)
    {
        cout<<"("<<par[i]<<","<<i<<","<<key[i]<<")"<<endl;
    }
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