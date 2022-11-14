#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i = a; i<= b ; i++)
#define loopr(i,a,b) for(ll i = a; i>=b ; i--)
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nn <<"\n"
#define all(x) (x).begin(), (x).end()
#define in INT_MAX

void solve(){
    ll n,x;
        cin>>n>>x;
        ll a[n],b[n];
        loop(i,0,n-1){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        bool c;
        for(int i=n-x;i<x;i++){
            if(a[i]!=b[i]){
                cout<<"NO" nn;
                return ;
            }
        }
        
        cout<<"YES" nn;
        return;
}

int main(int argc,char const * argv[]){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}