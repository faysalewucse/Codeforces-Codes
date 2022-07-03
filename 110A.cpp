#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    int flag =0;
    cin>>n;
    while(n > 0)
    {
        int d = n%10;
        n /= 10;
        if(d == 4 || d == 7)
        {
            flag++;
        }
    }

    if(flag == 4 || flag == 7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
