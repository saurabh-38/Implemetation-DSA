#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi(a,b) for(ll i=a;i<b;i++)
#define lcm(a,b) (a*b)/gcd(a,b)
#define vll vector<ll>
#define vlll vector<vll>
#define mp map<ll,ll>
ll const tax=1e9+7;
#define pb push_back
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout) 
ll mo(ll a){return a%tax;}
void multiply(vector<ll> a[],vll xt[],ll n){
vll yt[n];
ll kt[n][n];
for(ll i=0;i<n;i++){
	for(ll j=0;j<n;j++){
		//xt[i].pb(a[i][j]);
		yt[i].pb(a[i][j]);
	}}
for(ll i=0;i<n;i++){
	for(ll j=0;j<n;j++){
		kt[i][j]=0;
for(ll k=0;k<n;k++){

kt[i][j]=mo(mo(kt[i][j])+mo(mo(xt[i][k])*mo(yt[k][j])));

}}}

for(ll i=0;i<n;i++){
	for(ll j=0;j<n;j++){
	a[i][j]=kt[i][j];
	}}
}

void power(vll a[],vll b[],ll x){

if(x==1)return;
ll n=a[0].size();
power(a,b,x/2);
multiply(a,a,n);
if(x%2!=0)multiply(a,b,n);

}
signed main(){
	//take_input;
	ll t;
	cin>>t;
	while(t--){
ll n,po;
cin>>n>>po;
vll a[n],b[n];
for(ll i=0;i<n;i++){
	for(ll j=0;j<n;j++){
		ll x;
		cin>>x;
		a[i].pb(x);
		b[i].pb(x);
}}
power(a,b,po);
for(ll i=0;i<n;i++){
	for(ll j=0;j<n;j++){
		cout<<a[i][j]<<" ";
}
cout<<endl;}

}
return 0;
}


