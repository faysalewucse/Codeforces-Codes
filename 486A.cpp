#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n;
    cin >> n;

    if(n%2 == 1) {
        long double c = n * 1.0;
        c = ceil(c/2) * -1.0;
        long long result = c;
        cout<<result<<endl;
    }
    else cout<<n/2<<endl;

}
