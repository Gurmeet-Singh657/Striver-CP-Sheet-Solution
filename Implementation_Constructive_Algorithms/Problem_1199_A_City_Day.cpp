#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define rep(a,b) for(int i=a;i<=b;i++)
#define vi vector<int>
int32_t main()
{
       int n,x,y;
       cin>>n>>x>>y;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       int rightmin[n];
       int leftmin[n];
       rightmin[0]=INT_MAX;
       leftmin[n-1]=INT_MAX;
       for(int i=1;i<n;i++)
       {
           int mini=INT_MAX;
           int start=i-1;
           while(start>=0 && start>=i-x)
           {
               mini=min(arr[start],mini);
               start--;
           }    
           rightmin[i]=mini;
       }
       for(int i=0;i<n-1;i++)
       {
           int mini=INT_MAX;
           int start=i+1;
           while(start<n && start<=i+y)
           {
               mini=min(arr[start],mini);
               start++;
           }
           leftmin[i]=mini;
       }
       int i;
       for(i=0;i<n;i++)
       {
           if(arr[i]<rightmin[i] && arr[i]<leftmin[i])
           break;
       }
       cout<<i+1<<endl;
    return 0;
}