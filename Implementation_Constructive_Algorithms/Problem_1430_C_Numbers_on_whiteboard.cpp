#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    // always we come up with answer =2
    // for n=7
    // 1 2 3 4 5 6 7
    // 1 2 3 4 6 6
    // 1 2 3 4 6 --> n-3 n-1   --- 4 6
    // 1 2 3 5 -- 3 5
    // 1 2 4 -- 2 4
    // 1 3 -- 1 3
    // 2
    while(testcase>0)
    {
        int n;
        cin>>n;
        cout<<2<<endl;
        if(n==2)
        {
            cout<<1<<" "<<2<<endl;
        }
        else
        {
            cout<<n-2<<" "<<n<<endl; // n-1 comes up
            cout<<n-1<<" "<<n-1<<endl;
            for(int i=n-3;i>=1;i--)
            {
                cout<<i<<" "<<i+2<<endl;
            }
        }
        testcase--;
    }
    return 0;
}