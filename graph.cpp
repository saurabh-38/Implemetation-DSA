struct graph{
ll n,m;
vector<vl> vt[tax];
void inli(ll ni,ll mi){n=ni,m=mi;}
void build(){
	while(m--){
		ll x,y;
		cin>>x>>y;
		x--,y--;
		vt[x].pb(y);
}}

void bfs(ll v){
bool vist[n+1];
for(ll i=0;i<n;i++)vist[i]=false;
vist[v]=true;
queue<ll> st;
st.push(v);
while(!st.empty())
{
ll x=st.front();
cout<<x<<" ";
st.pop();
for(auto &e:vt[x]){
	if(vist[e]==false)st.push(e);}
}
}
void dfs(ll v,ll vis[]){
vis[v]=1;
cout<<v<<endl;
for(auto e:graph[v]){
if(vis[e]==0)dfs(e);
}
}
};

