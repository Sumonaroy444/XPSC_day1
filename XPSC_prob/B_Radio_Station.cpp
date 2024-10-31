#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    for(int i=0;i<n;i++){
        string nm,ip;
        cin>>nm>>ip;
        mp[ip]=nm;
    }
    for(int i=0;i<m;i++){
        string nm,ip;
        cin>>nm>>ip;
        ip.pop_back();
        cout<<nm<<" "<<ip<< "; #"<<mp[ip]<<endl;
    }
}
int main()
{
    solve();
    return 0;
}


