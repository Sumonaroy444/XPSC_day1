
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int>mp;
    int mx=0,ar;
    while(n--){
        cin>>ar;
        mp[ar]++;
        mx=max(mx,mp[ar]);
    }
    cout<<mx<<endl;
}


