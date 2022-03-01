#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<string,int> map;
    map["Tetrahedron"]=4;
    map["Cube"]=6;
    map["Octahedron"]=8;
    map["Dodecahedron"]=12;
    map["Icosahedron"]=20;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        sum+=map[str];
    }
    cout<<sum<<endl;

    return 0;
}