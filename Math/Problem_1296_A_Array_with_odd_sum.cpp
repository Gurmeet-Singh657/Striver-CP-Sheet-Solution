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
        int sum=0;
        bool flagodd=false; // means we have no odd number yet
        bool flageven=false; // means we have no even number
        for(int i=0;i<n;i++) 
        {
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]%2!=0) 
            flagodd=true; // odd number is found in the array
            if(arr[i]%2==0)
            flageven=true; // even number is found in the array
        }
        if(sum%2!=0) // if oddsum can be formed
        cout<<"YES"<<endl;
        else if(flageven && flagodd) // if atleast one odd and atleast one even is present
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}