#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define fa(i,a) for(auto i:a)
#define fi(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define vi vector<int>
#define vb vector<bool>
#define si set<int>
#define msi multiset<int>
#define sti stack<int>
#define pqi priority_queue<int>
#define pminh priority_queue<int,vector<int>,greater<int>>
#define qi queue<int>
#define mii map<int,int>
#define mci map<char,int>
#define mvi map<int,vi>
#define mpi map<int,pii>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define pb push_back
#define gi greater<int>
#define lb(v,a) lower_bound(v.begin(),v.end(),a)-v.begin()
#define ub(v,a) upper_bound(v.begin(),v.end(),a)-v.begin()
#define bs(v,a) binary_search(v.begin(),v.end(),a)
#define maxe(a) a[max_element(se(a))-a.begin()]
#define mine(a) a[min_element(se(a))-a.begin()]
#define se(a) a.begin(),a.end()
#define sa(a) accumulate(se(a),0)
#define ss second
#define ff first
#define ln '\n'
#define line cout<<ln
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,r;
    cin>>k>>r;
    // what i want is 
    // (k * x - r) % 10 =0 or (k*x)%10=0
    int i;
    for(i=1;i<=10;i++)
    {
        if((k*i)%10==0 || ((k*i)-r)%10==0)
        break;
    }
    cout<<i<<endl;
    return 0;
}