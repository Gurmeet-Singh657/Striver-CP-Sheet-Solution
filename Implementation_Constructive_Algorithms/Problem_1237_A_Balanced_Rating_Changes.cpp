#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int prevele=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            if(prevele==0)
            {
                cout<<arr[i]/2<<endl;
                prevele=arr[i];
            }
            else
            {
                int done=prevele/2;
                int avg=(prevele+arr[i])/2;
                cout<<(avg-done)<<endl;
                prevele=0;
            }
        }
        else
        cout<<arr[i]/2<<endl;
    }
    return 0;
}