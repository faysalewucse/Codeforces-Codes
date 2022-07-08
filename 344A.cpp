#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    int magnets[100000];
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>magnets[i];
    }

    int group = 0;
    int flag = magnets[0];
    for(int i = 0; i < n; i++){
        if(flag != magnets[i]){
            group++;
            flag = magnets[i];
        }
    }

    cout<<group+1<<endl;

}
