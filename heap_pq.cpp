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
int cnt = 0;
class custmr
{
    public:
    int bill;
    string name;
    int ts;
    custmr()
    {

    }
    custmr(int a,string A)
    {
        bill = a;
        name = A;
    }
};
class heap
{
    public:
    heap()
    {

    }
    int l = 0;
    custmr per[100];
    void increase(int b,string A,int i)
    {
         if(b<per[i].bill)
         {
            return;
         }
         per[i].bill = b;
         per[i].name = A;
         cnt++;
         per[i].ts = cnt;
         while(i>1 && per[i/2].bill<per[i].bill)
         {
             swap(per[i],per[i/2]);
             i = i/2;
         }
    }
    void insert(int a,string A)
    {
        l++;
        per[l].bill = INT_MIN;
        per[l].name = "";
        increase(a,A,l);
    }
    void print()
    {
        for(int i=1;i<=l;i++)
        {
            cout<<per[i].name<<endl;
            cout<<per[i].bill<<endl;
            cout<<per[i].ts<<endl;
        }
    }
};
signed main()
 {
    granite_state
    heap h1;
    for(int i=0;i<3;i++)
    {
        int a;
        string A;
        cin>>A>>a;
        h1.insert(a,A);
    }
    h1.print();
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