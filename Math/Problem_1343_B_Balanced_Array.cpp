#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int halfele=n/2;
        if(halfele%2!=0) cout<<"NO"<<endl; // since no.of odd ele in half will give odd sum whihc is not possible for other half in even sum
        else
        {
            cout<<"YES"<<endl;
            // even elements print
            int evensum=0;
            for(int i=0;i<halfele;i++)
            {
                cout<<(2*(i+1))<<" ";
                evensum+=2*(i+1);
            }
            // oddele print
            int oddsum=0;
            for(int i=0;i<halfele-1;i++)
            {
                cout<<(2*(i+1))-1<<" ";
                oddsum+=2*(i+1)-1;
            }
            cout<<evensum-oddsum<<endl;
        }
    }
    return 0;
}