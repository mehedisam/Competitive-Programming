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
int n,total;
int mem[505][200000];
 
int dp(int x,int y){
    int a=x,b=y;
    if(y==total){
        return 1;
    }
    else if(total<y || x>n)return 0;
    if(mem[x][y]!=-1)return mem[x][y];
    ll res=0;
    res=(res+dp(x+1,y+x))%MOD;
    res=(res+dp(x+1,y))%MOD;
    return mem[x][y]=res;
}
 
int main(){
    FAST
    cin>>n;
    total=n*(n+1);total/=2;
    if(total&1){
        cout<<0<<endl;
        return 0;
    }
    total/=2;
    
    memset(mem,-1,sizeof mem);
    ll ans,y=500000004;
    ans=dp(1,0);
    cout<<((ans*y)%MOD);
 
 
    return 0;
}