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
#define MOD 1000000009
#define pb push_back
#define endl "\n"
#define pf push_front
#define ll long long int
#define ull unsigned long long
#define N 100006
 
int n,W,w[1005],a[1005];
int mem[1005][N];
 
 
int main(){
    FAST
    cin>>n>>W;
    for(int i=1;i<=n;i++){
        cin>>w[i];
    }
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=W;j++){
            mem[i][j] = mem[i-1][j];
            if(j>=w[i])
            mem[i][j]=max(mem[i][j],a[i]+mem[i-1][j-w[i]]);
        }
    }
    cout<<mem[n][W];
 
 
    return 0;
}