#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<c;j++)
            {
                cout<<"#";
            }
        }
        else if((i-1)%4==0)
        {
            for(int j=0;j<c-1;j++)
            cout<<".";
            cout<<"#";
        }
        else
        {
            cout<<"#";
            for(int j=1;j<c;j++)
            cout<<".";
        }
        cout<<endl;
    }
    return 0;
}