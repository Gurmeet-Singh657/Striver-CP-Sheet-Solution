#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; // no. of buttons the lock has
    cin>>n;
    // for n=6
    // failed in 1 button cases
    /*
    1
    2
    3
    4
    5
    failed in 2 button cases
    so we can find that 6 is right as it remains pressed
    6-1
    6-2
    6-3
    6-4
    failed in 3 button cases
    so we can find that 6-5 is right as it remains pressed
    6-5-1
    6-5-2
    6-5-3
    failed in 4 button cases
    6-5-4-1
    6-5-4-2
    failed in 5 button cases
    6-5-4-3-1
    --- finally
    6-5-4-3-2-1

    */
   int count=n;
   for(int i=1;i<=n-1;i++)
   count+=i*(n-i);
   cout<<count<<endl;
    return 0;
}