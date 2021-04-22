
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

signed main(){
	take_input;
ll n;
cin>>n;
ll i,j,k;
ll vis[n+1][n+1];

pair<ll,ll> start,end;
ll ax,ay,cx,cy;
cin>>ax>>ay>>cx>>cy;
start={ax,ay};
end={cx,cy};
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
	vis[i][j]=-1;}}

vis[ax][ay]=0;

ll lef[8]={1,1,-1,-1,2,2,-2,-2};
ll rig[8]={2,-2,2,-2,1,-1,1,-1};
vector<pair<ll,ll>> vec;
ll len=1;
vec.pb({ax,ay});
while((vec.size()>0)&&(vis[cx][cy]==-1)){
vector<pair<ll,ll>> st;
for(i=0;i<vec.size();i++){
ll x=vec[i].first;
ll y=vec[i].second;

for(j=0;j<8;j++){
if(((x+lef[j]>=1)&&(x+lef[j])<=n)&&((y+rig[j]>=1)&&(y+rig[j])<=n)&&vis[x+lef[j]][y+rig[j]]){


vis[x+lef[j]][y+rig[j]]=len;

st.push_back({x+lef[j],y+rig[j]});
}}}

len++;
vec=st;
}

cout<<vis[cx][cy]<<endl;

for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		cout<<vis[i][j]<<"  ";
	}
	cout<<endl;
}


return 0;

}


