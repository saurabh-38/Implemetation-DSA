#include<bits/stdc++.h>
/*
Kruksal algorith is for mst 

*/
using namespace std;
#define ll long long
const ll nax=100;
#define mp make_pair
using namespace std;
ll find_n(ll a, ll id[]){

if(id[a]<0)
	return a;
return id[a]=find_n(id[a],id);

}
void union_n(ll a,ll b,ll id[]){

	id[a]+=id[b];
	id[b]=a;
}

ll kruskal(pair<ll ,pair<ll,ll>> prr[],ll v,ll e)
{
	ll a,b,c,w,min_c=0;
	ll id[v+2];
	for(ll i=1;i<=v;i++) id[i]=-1;
for(ll i=0;i<e;i++)
{
	a=prr[i].second.first;
	b=prr[i].second.second;
  a=find_n(a ,id);
  b=find_n(b,id );
  w=prr[i].first;

  if(a!=b){
  	min_c=min_c+w;
  	union_n(a,b,id);
  }


}





return min_c;
}



int main(){

ll t;
cin>>t;
while(t--){

pair<ll ,pair<ll,ll>> prr[nax];

cout<<"Enter a vertex and edge"<<endl;
ll e,v,i,j,k,l,x,y,w;
cin>>v>>e;
//ll id[v+2];

for(i=0;i<e;i++){
	cin>>x>>y>>w;
	prr[i]=mp(w,mp(x,y));
}
// for(i=1;i<=n;i++) id[i]=-1;

sort(prr,prr+e);
cout<<"Minimun spannaing graph "<<kruskal(prr,v,e)<<endl;


}

}
