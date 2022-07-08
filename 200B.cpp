#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long double percent,result = 0;
    for(int i=0;i<n;i++){
        cin>>percent;
        if(percent !=0) result += percent/100.0;
    }
    cout<<fixed<<setprecision(12)<<(result/(n*1.0000000))*100.0<<endl;
}

