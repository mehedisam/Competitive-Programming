#include <bits/stdc++.h>
using namespace std;
int N;
int ans;
int lvl[100][100];
bool vis[100][100]={false};
bool valid(int x,int y){
    return x>=1 && x<=N && y>=1 && y<=N;
}
void bfs(char c[][15],pair<int,int> p,int k,vector<pair<int,int>>  move){
    int m=66;
    while(k--){
        bool flag=true;
        queue<pair<int,int>> q;
        q.push(p);
        int x=p.first;
        int y=p.second;
        vis[x][y]=true;
        lvl[x][y]=0;
        char z=m;
        m++;
        while(!q.empty()){
            pair<int,int> qt=q.front();
            q.pop();
            int a=qt.first;
            int b=qt.second;
            for(auto child:move){
                int childx=child.first+a;
                int childy=child.second+b;
                if(!valid(childx,childy)){
                    continue;
                }
                if(c[childx][childy]==z){
                    ans=ans+lvl[a][b]+1;
                    flag=false;
                    p.first=childx;
                    p.second=childy;
                    break;
                }
                if(!vis[childx][childy] && (c[childx][childy]=='.' || c[x][y]>c[childx][childy]) && c[childx][childy]!='#'){
                    vis[childx][childy]=true;
                    q.push({childx,childy});
                    lvl[childx][childy]=lvl[a][b]+1;
                }
            }
            if(!flag) break;
        }
        if(flag){
            ans=-10;
            return;
        }
        memset(lvl,0,sizeof(lvl));
        memset(vis,0,sizeof(vis));
    }
}

int main()
{
    int t,kase=0;
    cin>>t;
    while(t--){
        cin>>N;
        //N+=2;
        char c[15][15];
        int k=-1;
        pair<int,int> p;
        vector<pair<int,int>>  move={{0,1},{0,-1},{-1,0},{1,0}};
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                cin>>c[i][j];
                if(c[i][j]!='#' && c[i][j]!='.')k++;
                if(c[i][j]=='A'){
                    
                    p.first=i;
                    p.second=j;
                }
            }
        }
        bfs(c,p,k,move);
        if(ans<0){
            cout<<"Case "<<++kase<<": Impossible"<<endl;
        }
        else{
            cout<<"Case "<<++kase<<": "<<ans<<endl;
        }
        ans=0;
        memset(lvl,0,sizeof(lvl));
        memset(vis,0,sizeof(vis));
    }

    return 0;
}
