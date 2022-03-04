#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Limakage, Bobage;
    cin >> Limakage >> Bobage;
    if (Limakage == Bobage)
        cout << 1 << endl;
    else
    {
        int years=0;
        while(Limakage<=Bobage)
        {
            Limakage*=3;
            Bobage*=2;
            years++;
        }
        cout<<years<<endl;
    }
    return 0;
}