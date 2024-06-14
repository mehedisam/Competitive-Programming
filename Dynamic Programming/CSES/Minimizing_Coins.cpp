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
#define ll long long int
#define ull unsigned long long
ll n,mem[2000000],x;
 
 
 
 
int main(){
    FAST
    cin>>n>>x;
    ll a[n+3];
    f1r(a,n);
    mem[0]=0;
    sort(a+1,a+n+1);
    for(int i=1;i<=x;i++){
        ll y=1e15;
        for(int j=1;j<=n;j++){
            if(i<a[j])break;
            y=min(y,(1LL+mem[i-a[j]]));
        }
        mem[i]=y;
    }
    if(mem[x]>100000000)cout<<-1;
    else cout<<mem[x];
 
 
    return 0;
}
