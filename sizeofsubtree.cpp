#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define f(a,b) for(ll i=a;i<b;i++)
#define lcm(a,b) (a*b)/gcd(a,b)
#define vl vector<ll>
#define vll vector<vl>
#define mp map<ll,ll>
ll const tax=1e9+7;
#define pb push_back
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
ll n;
vector<ll>gr[1000010];
ll tim=0;
ll si[1000010];
//ll out[100005];
vector<bool> vis(1000010,false);
ll dfs(ll a){
vis[a]=true;
ll cur_siz=1;
for(auto &e: gr[a]){
	if(vis[e]==false){
	cur_siz+=dfs(e);
	}
}
return si[a]=cur_siz;
}
signed main(){
//take_input;
cin>>n;
for(ll i=0;i<n-1;i++)
{
	ll a,b;
	cin>>a>>b;
gr[a].pb(b);
gr[b].pb(a);
}
ll node;
cin>>node;
dfs(node);
// for(ll i=1;i<=n;i++){
// 	cout<<in[i]<<"  "<<out[i]<<endl;
// }

ll q;
cin>>q;
while(q--){

ll p,ct=0;
cin>>p;

cout<<si[p]-1<<endl;




}

return 0;

}


