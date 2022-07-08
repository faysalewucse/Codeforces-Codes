#include<bits/stdc++.h>
using namespace std;
int main()
{
    int colors[5];
    for (int i=0;i<4;i++)
    {
        cin>>colors[i];
    }
    int n = sizeof(colors) / sizeof(colors[0]);
    sort(colors, colors+n);
    int to_buy = 0;
    for (int i = 0; i < 4 ;i++)
    {
        if(colors[i] == colors[i+1]) to_buy++;
    }
    cout<<to_buy<<endl;
}

