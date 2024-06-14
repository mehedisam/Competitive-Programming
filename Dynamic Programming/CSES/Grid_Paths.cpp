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
 
 
int main(){
    FAST
    int n;
    cin>>n;
    char a[n+3][n+3];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)cin>>a[i][j];
    }
    int b[n+3][n+3];
    mem(b);
    b[0][1]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]=='*')continue;
            b[i][j]=(b[i][j-1]+b[i-1][j])%MOD;
        }
    }
    cout<<b[n][n];
 
 
    return 0;
}