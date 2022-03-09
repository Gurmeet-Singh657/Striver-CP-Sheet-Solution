#include<bits/stdc++.h>
using namespace std;
int main()
{
    int noofpages;
    cin>>noofpages;
    int arr[7];
    int totalsum=0;
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
        totalsum+=arr[i];
    }
    int rem=noofpages%totalsum;
    if(rem==0)
    rem=totalsum;
        for(int i=0;i<7;i++)
        {
            rem-=arr[i];
            if(rem<=0)
            {
            cout<<i+1<<endl;
            break;
            }
        }
    return 0;
}