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
    cin>>n;
    mem[0]=0;
    for(int i=1;i<=n;i++)mem[i]=1e9;
    for(int i=1;i<=n;i++){
        
        ll y=i,z,a=INT_MAX;
        while(y){
            z=y%10;
            a=min(a,(1ll+mem[i-z]));
            y=y/10;
        }
        mem[i]=a;        
    }
    cout<<mem[n];
 
 
    return 0;
}