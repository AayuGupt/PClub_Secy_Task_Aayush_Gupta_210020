#include<bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
#define vi vector<int>
#define pb push_back
#define p push
#define sll stack<long long>
#define qll queue<long long>
#define vll vector<long long>
#define st string
#define vvll vector<vll>
#define vstr vector <string>
#define fori(n) for(ll i=0;i<n;i++)
#define forj(n) for(int j=0;j<n;j++)
#define fork(n) for(int k=0;k<n;k++)
#define fori1(n) for(int i=1;i<n;i++)
#define f(i,a,b) for(int i=a;i<=b;i++)s
#define s(v) sort(v.begin(),v.end())
#define ll long long
#define mp   make_pair 


bool validate(int i,int j,int n,int m){
    return i>=0 && i<n && j<m &&j>=0;
}

void solve(int n,int m){
	// cout<<n<<" "<<m;
    vector<string> board(n);
    pair<int,int> block;
    pair<int,int> white;
    pair<int,int> knight;
    vector<vector<ll>> visited(n,vector<ll>(m,-1));
    for(int i=0;i<n;i++){
        cin>>board[i];
        // cout<<board[i];
        for(int j=0;j<m;j++){
            if(board[i][j]=='Q'){
                white = {i,j};
            }
            if(board[i][j]=='X'){
                block = {i,j};
                visited[block.first][block.second] = 1;
            }
            if(board[i][j]=='P'){
                knight = {i,j};
            }
        }
    }
    vector<int> dx = {1,1,2,2,-1,-1,-2,-2};
    vector<int> dy = {2,-2,1,-1,2,-2,1,-1};
   
  

    queue<pair<int,pair<int,int>>>pq;
    pq.push({0,{knight}});
    while(pq.size()){
        auto it = pq.front();
        pq.pop();
        int x = it.first;
        int i = it.second.first;
        int j = it.second.second;
        if(visited[i][j]!=-1)continue;
        visited[i][j] = x;
        if(i==white.first && j==white.second){
            cout<< visited[i][j]<<"\n";
            return; 
        }
        for(int k=0;k<8;k++){
            int i1 = i+dx[k];
            int j1 = j+dy[k];
            if(validate(i1,j1,n,m) && visited[i1][j1] == -1){
                pq.push({x+1,{i1,j1}});
            }
        }
    }
    // fori(n)out(visited[i]);
    cout<< -1<<"\n";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif 
     
    int t;
    cin >> t;

    while(t--){
    	int n,m;
    	cin>>n>>m;
    	// cout<<n;
    	
        solve(n,m);
        
    }

    
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";

}