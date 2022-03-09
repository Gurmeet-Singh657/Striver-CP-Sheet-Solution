#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<pair<int,int>> ans;
    for(int i=0;i<n;i++)
    {
        ans.push_back({arr[i],i});
    }
    sort(ans.begin(),ans.end());
    int sum=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(sum+ans[i].first<=k)
        {
            sum+=ans[i].first;
        }
        else
        break;
    }
    cout<<i<<endl;
    for(int j=0;j<i;j++)
    cout<<ans[j].second+1<<" ";
    if(i!=0)
    cout<<endl;

    return 0;
}