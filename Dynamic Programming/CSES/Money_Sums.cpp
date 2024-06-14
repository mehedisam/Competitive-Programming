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
int n;
int a[102],mem[103][100003];
set<int>s;
 
int dp(int x,int y){
    if(x>n)return y;
    if(mem[x][y]!=-1)return mem[x][y];
 
    int res,res1;
    res=dp(x+1,y+a[x]);
    res1=dp(x+1,y);
    s.insert(res);s.insert(res1);
    mem[x][y]=res;
    return res;
}
 
int main(){
    FAST
    cin>>n;
    f1r(a,n);
    int ans;
    memset(mem,-1,sizeof mem);
    ans=dp(1,0);
    s.erase(s.begin());
    cout<<s.size()<<endl;
    
    for(auto st:s)cout<<st<<" ";
 
    return 0;
}