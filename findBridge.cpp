#include<bits/stdc++.h>
//it all about to change low time of node 
using namespace std;
#define ll long long
#define f(a,b) for(ll i=a;i<b;i++)
#define lcm(a,b) (a*b)/gcd(a,b)
#define vl vector<ll>
#define vll vector<vl>
#define mp map<ll,ll>
ll const tax=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
vector<ll> gr[100005];
#define pb push_back
ll in[100005];
ll low[100005];
vector<bool> vis(100005,false);
ll timer=0;
void dfs(ll node,ll par){
in[node]=low[node]=timer;
timer++;
vis[node]=true;
for(auto child:gr[node]){

if(child==par){continue;}

if(vis[child]==true){
	low[node]=min(in[child],low[node]);//
}else{

dfs(child,node);
if(low[child]>in[node]){
	cout<<node<<" "<<child<<endl;// bridge hai
}

low[node]=min(low[node],low[child]);// parent time change ker rahe hai

}
}}






signed main(){

take_input;


ll n,m;
cin>>n>>m;
while(m--){
	ll a,b;
cin>>a>>b;
gr[a].pb(b);
gr[b].pb(a);
}

dfs(1,-1);




return 0;

}


