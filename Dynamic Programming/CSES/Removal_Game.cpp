#include <bits/stdc++.h>
using namespace std;
#define Fread freopen("input.txt", "r", stdin);
#define Fout freopen("output.txt", "w", stdout);
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f1r(a, b) for (int i = 1; i <= (b); ++i)cin>>a[i]
#define f0r(a, b) for (int i = 0; i < (b); ++i)cin>>a[i]
#define all(x) (x).begin(), (x).end()
#define mem(x) memset(x,0,sizeof x)
#define yes "YES\n"
#define no "NO\n"
#define MOD 1000000007
#define pb push_back
#define endl "\n"
#define pf push_front
#define ll int64_t
#define ull unsigned long long
#define N 200006
int n,a[5005];
ll me[5002][5002][2];
 
ll dp(int x,int y,int p){
    int aa=x,b=y;
    if(x==y){
        if(p==0)return a[x];
        else return 0;
    }
    if(me[x][y][p]!=-1)return me[x][y][p];
    
    if(p==1){
        ll res;
        res=dp(x+1,y,0);
        res=min(res,dp(x,y-1,0));
        return me[x][y][p]=res;
    }
    else{
        ll res;
        res=a[x]+dp(x+1,y,1);
        res=max(res,a[y]+dp(x,y-1,1));
        return me[x][y][p]=res;
    }
 
    
 
}
 
 
int main(){
    FAST
    cin>>n;
    f1r(a,n);
    memset(me,-1,sizeof me);
    ll ans;
    ans=accumulate(a+1,a+n+1,0ll);
    ans=ans-dp(1,n,1);
    cout<<ans<<endl;
 
    return 0;
}