#include<bits/stdc++.h>
using namespace std;
int main()
{
    int levels;
    cin>>levels;
    int p,q;
    int both[500];
    int c;

    for (int i=1; i<=levels; i++)
    {
        both[i] = 0;
    }
    cin>>p;
    for (int i=0; i<p; i++)
    {
        cin>>c;
        both[c]++;
    }
    cin>>q;
    for (int i=0; i<q; i++)
    {
        cin>>c;
        both[c]++;
    }
    int flag = 0;
    for (int i=1; i<=levels; i++)
    {
        if(both[i] == 0) flag = 1;
    }

    if(flag == 0) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
}

