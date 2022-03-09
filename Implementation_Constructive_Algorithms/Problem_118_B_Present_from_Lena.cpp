#include<bits/stdc++.h>
using namespace std;
void Patternprinting(int n)
{
    int rows=2*n+1;
    int start=0;
    int space=n;
    for(int i=0;i<rows;i++)
    {
        // Space printing
        for(int j=0;j<space;j++)
        cout<<"  ";
        if(start!=0)
        cout<<"0 ";
        int currcount=2*start-1;
        int s=1;
        for(int j=0;j<currcount;j++)
        {
            cout<<s<<" ";
            if(j<start-1)
            s++;
            else
            s--;
        }
        cout<<"0";
        cout<<endl;
        if(i<n)
        {
        start++;
        space--;
        }
        else
        {
        start--;
        space++;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    // Pattern printing
    Patternprinting(n);
    return 0;
}