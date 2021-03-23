#include<bits/stdc++.h>
// longest increasing subsequence
//time complexity o(nlog(n))
// lower boun takes log(n)
using namespace std;
#define ll long long
#define f(a,b) for(ll i=a;i<b;i++)
#define lcm(a,b) (a*b)/gcd(a,b)
#define vl vector<ll>
#define vll vector<vl>
#define mp map<ll,ll>
#define pb push_back
ll const tax=1e9+7;
signed main(){

ll n;
cin>>n;
vl at(n+3);
f(0,n)cin>>at[i];

vl st;
st.pb(at[0]);
f(1,n){

if(st.back()<at[i]){
	st.pb(at[i]);
}else{

auto x=lower_bound(st.begin(), st.end(),at[i])-st.begin();//serching a lower bound of st[i]

st[x]=at[i];
}}

cout<<st.size()<<endl;










return 0;

}