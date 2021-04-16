#include<bits/stdc++.h>
using namespace std;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define ll long long
#define vl vector<ll>
ll const INF=1e9+7;
#define fi first
#define se second
#define vll vector<vector<ll>>
vector<pair<ll,ll>> graph[100];
vl dist(1000,INF);
#define pb push_back
ll n;
// void diskstra(ll x)
// {
// 	ll i;
// 	for(i=1;i<=n;i++)
// 		dist[i]=INF;
// 	priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > >q;
// 	q.push({0,x});
// 	dist[x]=0; 
// 	while(!q.empty())
// 	{
// 		ll a=q.top().fi;//weight frome sorce
// 		ll b=q.top().se;//vertex
// 		q.pop();
// 		if(a!=dist[b])
// 			continue;
// 		for(auto &e:graph[b])
// 		{
// 			if(a+e.first<dist[e.second])
// 			{
//                  dist[e.second]=a+e.first;
//                  q.push({dist[e.second],e.second});
// 			}
// 		}
// 	}


// for(i=1;i<=n;i++)cout<<dist[i]<<" ";


// }


void dijkstra(ll src){
	dis[src]=0;
	set<pair<ll,ll>>st;
		dist[1]=0;
		for(int i=1;i<=n;i++)
	       st.insert({dist[i],i});
	while(!st.empty())
	{
		ll u=st.begin()->second; st.erase(st.begin());
		for(auto x: graph[u])
		{ll v=x.first;
		ll wt=x.second;
		if(dist[u] + wt<dist[v])
		{	st.erase({dist[v],v});// remove this , no use of it
				dist[v]=dist[u]+wt; // update the minimum distance
				st.insert({dist[v],v});
	}}}
for(ll i=1;i<=n;i++)cout<<dist[i]<<"  ";

}

int main(){
	take_input;

ll v,e,w;
cin>>v>>e;
n=v;
ll a,b;
for(ll i=0;i<e;i++){
	cin>>a>>b>>w;
graph[a].pb({b,w});
graph[b].pb({a,w});}
ll src;
	cin>>src;
dijkstra(src);




}
