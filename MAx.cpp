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
class maxheap
{
    int *arr;
    int size;
    int total_size;
    public:
    maxheap(int n)
    {
        arr = new int(n);
        size = 0;
        total_size = n;
    }
    void insert(int val)
    {
        if(size==total_size)
        {
            cout<<"Heap max size has been reached"<<endl;
            return;
        }
        int index = size;
        arr[index] = val;
        size++;
        while(index>0 && arr[(index-1)/2]<arr[index])
        {
            swap(arr[(index-1)/2],arr[index]);
            index = (index-1)/2;
        }
        cout<<arr[index]<<" is successfully inserted"<<endl;
    }
    void print()
    {
        for(int i=0;i<size;i++) cout<<arr[i]<<" ";
        line;
    }
    void heapify(int idx)
    {
         int left = 2*idx+1;
         int right = 2*idx+2;
         int n = size;
         if(left<n && right<n && arr[idx]<arr[left] && arr[idx]<arr[right])
         {
             if(arr[left]>=arr[right])
             {
                 swap(arr[idx],arr[left]);
                 heapify(2*idx+1);
             }
             else
             {
                 swap(arr[idx],arr[right]);
                 heapify(2*idx+2);
             }
         }
         else if(left<n && arr[idx]<arr[left])
         {
             swap(arr[idx],arr[left]);
             heapify(2*idx+1);
         }
         else if(right<n && arr[idx]<arr[right])
         {
            swap(arr[idx],arr[right]);
            heapify(2*idx+2);
         }
    }
    void Delete()
    {
        if(size==0)
        {
            cout<<"Heap Underflow"<<endl;
            return;
        }
        cout<<arr[0]<<" is deleted  succesfully"<<endl;
        arr[0] = arr[size-1];
        size--;
        if(size==0) return;
        heapify(0);
    }
};
signed main()
 {
    granite_state
    maxheap h1(6);
    h1.insert(23);
    h1.insert(12);
    h1.insert(17);
    h1.insert(5);
    h1.insert(30);
    h1.insert(18);
    h1.print();
    h1.Delete();
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