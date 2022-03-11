#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        cin>>n;
        int arr[n];
        int wrongodd=0,wrongeven=0;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(i%2==0 && arr[i]%2!=0) wrongodd++; // no. of odds at incorrect positions
            if(i%2!=0 && arr[i]%2==0) wrongeven++; // no.of evens at incorrect positions
        }
        if(wrongeven!=wrongodd) cout<<-1<<endl;
        else cout<<wrongeven<<endl;
    }
    return 0;
}