#include<bits/stdc++.h>
using namespace std;
int main()
{
    string m,n;
    string result = "";
    getline(cin , m);
    getline(cin , n);
    int count = 0;

    for (int i=0;i < m.size();i++)
    {
        if(m[i] == n[i]){
            result += "0";
        }
        else{
            result += "1";
        }
    }
    for (int i = 0; i< result.size() ; i++)
    {
        cout<<result[i];
    }
}

