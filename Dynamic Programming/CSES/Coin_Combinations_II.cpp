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
#define N 1000006
 
 
 
int main(){
    FAST
    int x;
    int n,a[N],b[103];
    cin>>n>>x;
    f1r(b,n);
    mem(a);
    a[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=b[i];j<=x;j++){
            a[j]=(a[j]+(a[j-b[i]]))%MOD;
        }
    }
    cout<<a[x];
    
    return 0;
}
