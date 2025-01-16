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
int dp[1000][1000];
float _01kanpsack(int n,int W,vector<int>&values,vector<int>&weights)
{
    cout<<"Solving 0-1 knapsack"<<endl;
    for(int i=0;i<n;i++)
    dp[0][i] = 0;
    for(int i=0;i<=W;i++)
    {
         dp[i][0] = 0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=W;j++)
        {
            if(weights[i]<=j)
            {
                 dp[i][j] = max(values[i-1]+dp[i-1][j-weights[i]],dp[i-1][j]);
            }
            else
            {
                 dp[i][j] = dp[i-1][j];
            }
            cout<<dp[i][j]<<"  |";
        }
        cout<<endl;
    }
}
signed main()
 {
    //granite_state
    int n,W;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter size of the knapsack W : ";
    cin>>W;
    vector<int>values;
    vector<int>weights;
    for(int i=1;i<=n;i++)
    {
        int v,w;
        cout<<"Enter the value and weight of "<<i<<"th item : ";
        cin>>v>>w;
        values.push_back(v);
        weights.push_back(w);
    }
    _01kanpsack(n,W,values,weights);
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