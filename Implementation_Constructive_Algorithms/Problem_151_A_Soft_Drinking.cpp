// n, k, l, c, d, p, nl, np
// No. of friends-n
// Total millileters of drink - kl millilitres
// Total no. of slices of lime available - cd slices
// Gm of salt available - p g
// amt of drink reqd for 1 toast - nl milliters
// amt of salt reqd for  1 toast - np

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int friend_drink=k*l / nl; // no. of toast possible with drink
    int friend_slice=c*d; // no. of toast possible with slices
    int friend_salt=p/np; // no.of toast possible with salt
    cout<<min(friend_drink,min(friend_salt,friend_slice))/n<<endl;
    return 0;
}