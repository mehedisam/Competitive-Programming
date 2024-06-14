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
#define ll int64_t
#define ull unsigned long long
#define N 200006
int a,b;
int mem[505][505];
 
int dp(int x,int y){
    if(x==y)return 0;
 
    if(mem[x][y]!=-1)return mem[x][y];
 
    int res=INT_MAX;
    for(int i=1;i<x;i++){
        res=min(res,1+dp(i,y)+dp(x-i,y));
    }
    for(int i=1;i<y;i++){
        res=min(res,1+dp(x,i)+dp(x,y-i));
    }
    return mem[x][y]=res;
}
 
int main(){
    FAST
        cin>>a>>b;
        memset(mem,-1,sizeof mem);
        int ans;
        ans=dp(a,b);
        cout<<ans<<endl;
 
 
    return 0;
}